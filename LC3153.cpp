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
        int total = num.size();
        for (auto j : i.second)
        {
            sum += j.second * (total - j.second);
            total -= j.second;
        }
    }

    std::cout << sum;
}