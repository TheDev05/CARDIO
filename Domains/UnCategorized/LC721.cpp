#include <bits/stdc++.h>
using namespace std;

void traverse(std::string text, std::set<std::string> &vis, std::map<std::string, std::set<int>> &data, std::vector<std::vector<std::string>> &num, std::vector<std::string> &res)
{
    vis.insert(text);
    res.push_back(text);

    for (auto i : data[text])
    {
        for (int j = 1; j < num[i].size(); j++)
        {
            if (vis.count(num[i][j]) == false)
                traverse(num[i][j], vis, data, num, res);
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<std::string>> num;
    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        std::vector<std::string> temp(m);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    /*
    Input: accounts = [[John johnsmith@mail.com john_newyork@mail.com]
    [John johnsmith@mail.com john00@mail.com]
    [Mary mary@mail.com]
    [John johnnybravo@mail.com]]
    */

    std::map<std::string, std::set<int>> data;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < num[i].size(); j++)
        {
            data[num[i][j]].insert(i);
        }
    }

    std::set<std::string> vis;
    std::vector<std::vector<std::string>> result;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < num[i].size(); j++)
        {
            if (vis.count(num[i][j]) == false)
            {
                std::vector<std::string> res(1, num[i][0]);
                traverse(num[i][j], vis, data, num, res);
                result.push_back(res);
            }
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            std::cout << result[i][j] << " ";
        }

        std::cout << '\n';
    }
}