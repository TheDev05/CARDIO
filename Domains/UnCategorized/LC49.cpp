#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::map<std::map<char, int>, std::vector<std::string>> data;
    for (int i = 0; i < num.size(); i++)
    {
        std::map<char, int> temp;
        for (auto j : num[i])
            temp[j]++;

        data[temp].push_back(num[i]);
    }

    std::vector<std::vector<std::string>> res;
    for (auto i : data)
        res.push_back(i.second);

    for (auto i : res)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}