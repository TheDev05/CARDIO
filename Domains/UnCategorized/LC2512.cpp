#include <bits/stdc++.h>
using namespace std;

static bool cmp(std::pair<int, int> a, std::pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;

    return a.first > b.first;
}

int main()
{
    int pos_number, neg_number;
    std::cin >> pos_number >> neg_number;

    std::vector<std::string> pos(pos_number), neg(neg_number);
    for (auto &i : pos)
        std::cin >> i;

    for (auto &i : neg)
        std::cin >> i;

    int report_size;
    std::cin >> report_size;

    std::vector<std::string> report(report_size);
    for (auto &i : report)
        getline(std::cin, i);

    int stud_id;
    std::cin >> stud_id;

    std::vector<int> stud(stud_id);
    for (auto &i : stud)
        std::cin >> i;

    int total;
    std::cin >> total;

    std::set<std::string> success, fail;
    for (auto i : pos)
        success.insert(i);

    for (auto i : neg)
        fail.insert(i);

    std::vector<std::pair<int, int>> res;
    for (int i = 0; i < report.size(); i++)
    {
        std::string temp;
        int sum = 0;

        for (int j = 0; j < report[i].size(); j++)
        {
            if (report[i][j] != ' ')
                temp += report[i][j];

            if (report[i][j] == ' ' || j == report.size() - 1)
            {
                if (success.count(temp))
                    sum += 3;
                if (fail.count(temp))
                    sum -= 1;

                std::cout << temp << '\n';
                temp.clear();
            }
        }

        res.push_back({sum, stud[i]});
    }

    sort(res.begin(), res.end(), cmp);

    std::vector<int> result;
    int count = 0;

    for (auto i : res)
        if (count < total)
        {
            result.push_back(i.second);
            count++;
        }

    for (auto i : result)
        std::cout << i << " ";
}