#include <bits/stdc++.h>
using namespace std;

void thedev05()
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

    std::deque<std::pair<int, int>> inox;
    for (auto i : data)
        inox.push_back({i.second, i.first});

    sort(begin(inox), end(inox));

    for (auto i : inox)
        std::cout << i.first << " " << i.second << '\n';

    int res = inox.size();
    while (inox.size() && k)
    {
        int temp = inox.front().second;
        int count = inox.front().first;

        if (k >= count)
            k = k - count, count = 0;
        else
            count = count - k, k = 0;

        if (count == 0)
            res--, inox.pop_front();
        else
            break;
    }

    std::cout << res;
}

int main()
{
    thedev05();
}