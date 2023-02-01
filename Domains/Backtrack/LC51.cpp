#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, std::set<int> &sum, std::set<int> &sub, std::set<int> &row, std::set<int> &col)
{
    if (row.count(i))
        return false;
    if (col.count(j))
        return false;
    if (sub.count(i - j))
        return false;
    if (sum.count(i + j))
        return false;

    return true;
}

bool getSolution(std::vector<std::string> &num, std::set<int> &row, std::set<int> &col, std::set<int> &sum, std::set<int> &sub, std::vector<std::vector<std::string>> &result, int index)
{
    if (index >= num.size())
    {
        result.push_back(num);
        return false;
    }

    for (int i = index; i < num.size(); i++)
    {
        bool ok = true;
        for (int j = 0; j < num[0].size(); j++)
        {
            if (isValid(i, j, sum, sub, row, col))
            {
                num[i][j] = 'Q';

                row.insert(i);
                col.insert(j);

                sub.insert(i - j);
                sum.insert(i + j);

                ok = getSolution(num, row, col, sum, sub, result, i + 1);

                num[i][j] = '.';
                ok = true;

                row.erase(i);
                col.erase(j);

                sub.erase(i - j);
                sum.erase(i + j);
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
    std::set<int> sum, sub, row, col;

    for (int i = 0; i < n; i++)
    {
        std::string temp;
        for (int j = 0; j < n; j++)
        {
            temp += '.';
        }

        num.push_back(temp);
    }

    std::vector<std::vector<string>> result;
    getSolution(num, row, col, sum, sub, result, 0);

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
