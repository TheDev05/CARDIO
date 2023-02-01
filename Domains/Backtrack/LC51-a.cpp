#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, std::set<int> &row, std::set<int> &col, std::set<int> &sum, std::set<int> &sub)
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

int getDesign(std::vector<std::string> &num, std::set<int> row, std::set<int> &col, std::set<int> &sum, std::set<int> &sub, std::vector<std::vector<std::string>> &result, int index)
{
    if (index >= num.size())
    {
        result.push_back(num);
        return 0;
    }

    for (int i = index; i < num.size(); i++)
    {
        for (int j = 0; j < num[0].size(); j++)
        {
            if (isValid(i, j, row, col, sum, sub))
            {
                num[i][j] = 'Q';

                row.insert(i);
                col.insert(j);

                sum.insert(i + j);
                sub.insert(i - j);

                getDesign(num, row, col, sum, sub, result, i + 1);

                sub.erase(i - j);
                sum.erase(i + j);

                col.erase(j);
                row.erase(i);

                num[i][j] = '.';
            }
        }

        return 0;
    }

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num;

    std::set<int> row, col;
    std::set<int> sum, sub;

    for (int i = 0; i < n; i++)
    {
        std::string temp;
        for (int j = 0; j < n; j++)
        {
            temp += '.';
        }

        num.push_back(temp);
    }

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