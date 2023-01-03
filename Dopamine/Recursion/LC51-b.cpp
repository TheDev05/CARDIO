#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, std::set<int> &row, std::set<int> &col, std::set<int> &sub, std::set<int> &sum)
{
    if (row.count(i) || col.count(j) || sum.count(i + j) || sub.count(i - j))
        return false;

    return true;
}

int getDesign(std::vector<std::string> &num, std::set<int> &row, std::set<int> &col, std::set<int> &sum, std::set<int> &sub, std::vector<std::vector<std::string>> &result, int i)
{
    if (i >= num.size())
    {
        result.push_back(num);
        return 0;
    }

    for (int j = 0; j < num[0].size(); j++)
    {
        if (isValid(i, j, row, col, sub, sum))
        {
            num[i][j] = 'Q';

            row.insert(i);
            col.insert(j);

            sub.insert(i - j);
            sum.insert(i + j);

            getDesign(num, row, col, sum, sub, result, i + 1);

            sum.erase(i + j);
            sub.erase(i - j);

            col.erase(j);
            row.erase(i);

            num[i][j] = '.';
        }
    }

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num;
    for (int i = 0; i < n; i++)
    {
        std::string temp;
        for (int j = 0; j < n; j++)
        {
            temp += '.';
        }

        num.push_back(temp);
    }

    std::set<int> row, col;
    std::set<int> sum, sub;

    std::vector<std::vector<std::string>> result;
    getDesign(num, row, col, sum, sub, result, 0);

    for (auto i : result)
    {
        for (auto j : i)
        {
            for (auto k : j)
                std::cout << k << " ";
            std::cout << '\n';
        }

        std::cout << '\n';
    }
}