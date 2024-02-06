#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::map<std::string, std::vector<std::string>> data;
    for (auto i : num)
    {
        std::string temp = i;
        sort(temp.begin(), temp.end());

        data[temp].push_back(i);
    }

    std::vector<std::vector<std::string>> res;
    for (auto i : data)
        res.push_back(i.second);
}