#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int k;
    std::cin >> k;

    std::map<int, int> data;
    for (auto i : num)
        data[i]++;

    std::vector<std::pair<int, int>> temp;
    for (auto i : data)
        temp.push_back({i.second, i.first});

    sort(temp.begin(), temp.end(), greater<>());

    std::vector<int> res;
    for (int i = 0; i < k; i++)
    {
        res.push_back(temp[i].second);
    }

    for (auto i : res)
        std::cout << i << " ";
}