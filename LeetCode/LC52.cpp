#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, std::set<int> &row, std::set<int> &col, std::set<int> &sub, std::set<int> &sum)
{
    if (row.count(i))
        return false;
    if (col.count(j))
        return false;
    if (sum.count(i + j))
        return false;
    if (sub.count(i - j))
        return false;

    return true;
}

bool getCount(std::vector<std::string> &num, std::set<int> &row, std::set<int> &col, std::set<int> &sum, std::set<int> &sub, int &count, int index)
{
    if (index >= num.size())
    {
        count++;
        return false;
    }

    for (int i = index; i < num.size(); i++)
    {
        bool ok = true;
        for (int j = 0; j < num[0].size(); j++)
        {
            if (isValid(i, j, row, col, sub, sum))
            {
                num[i][j] = 'Q';
                row.insert(i);
                col.insert(j);

                sum.insert(i + j);
                sub.insert(i - j);

                ok = getCount(num, row, col, sum, sub, count, i + 1);

                num[i][j] = '.';
                row.erase(i);
                col.erase(j);

                sum.erase(i + j);
                sub.erase(i - j);

                ok = true;
            }
        }

        if (ok)
            return true;
    }

    return false;
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

    int count = 0;
    getCount(num, row, col, sum, sub, count, 0);

    std::cout << count << '\n';
}