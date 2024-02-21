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

    sort(begin(temp), end(temp));

    int count = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        if (k > 0)
            if (temp[i].first > k)
                temp[i].first -= k, k = 0;
            else
                k -= temp[i].first, temp[i].first = 0;

        if (temp[i].first == 0)
            count++;
    }

    std::cout << temp.size() - count;
}