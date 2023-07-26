#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<std::string>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<std::string> temp(3);
        for (int j = 0; j < 3; j++)
        {
            std::cin >> temp[j];
        }

        num.push_back(temp);
    }

    std::map<std::string, std::map<std::string, int>> data;
    std::set<std::string> dish, table;

    for (int i = 0; i < n; i++)
    {
        std::string t, d;

        t = num[i][1];
        d = num[i][2];

        dish.insert(d);
        table.insert(t);

        data[t][d]++;
    }

    std::vector<std::vector<std::string>> result;

    std::vector<std::string> temp;
    temp.push_back("Table");

    for (auto i : dish)
        temp.push_back(i);

    result.push_back(temp);

    for (auto i : table)
    {
        std::vector<std::string> temp;
        temp.push_back(i);
        
        for (auto j : dish)
            temp.push_back(to_string(data[i][j]));

        result.push_back(temp);
    }

    for (auto i : result)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}