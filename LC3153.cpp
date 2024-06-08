#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> temp(n);
    for (auto &i : temp)
        std::cin >> i;

    std::vector<std::string> num;
    for (auto &i : temp)
        num.push_back(to_string(i));

    std::map<int, std::map<char, int>> data;
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num[i].size(); j++)
        {
            data[j][num[i][j]]++;
        }
    }

    int sum = 0;
    for (auto i : data)
    {
        std::cout << i.first << ": " << '\n';
        for (auto j : i.second)
            sum += j.second * (num.size() - j.second);

        std::cout << sum << "\n";
    }

    std::cout << sum;

    // int sum = 0;
    // for (int i = 0; i < num.size() - 1; i++)
    // {
    //     sum += traverse(num[i], num[i + 1]);
    // }

    // std::cout << sum;
}