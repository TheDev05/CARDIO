#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int deltaIndex;
    std::cin >> deltaIndex;

    std::map<int, int> data;
    for (auto i : num)
        data[i]++;

    std::deque<int> store;
    int min = INT_MAX;

    for (int i = 0; i < deltaIndex + 1; i++)
    {
        store.push_back(num[i]);
        if (--data[num[i]] == 0)
            data.erase(num[i]);
    }

    data[store.back()]++;
    auto it = data.lower_bound(store.front());
    if (it != data.end())
        min = std::min(abs(it->first - num[0]), min);

    if (it != data.begin())
        it--, min = std::min(abs(it->first - num[0]), min);

    for (int i = deltaIndex + 1; i < n; i++)
    {
        if (--data[store.back()] == 0)
            data.erase(store.back());

        store.pop_front();
        store.push_back(num[i]);

        auto it = data.lower_bound(store.front());
        if (it != data.end())
            min = std::min(abs(it->first - store.front()), min);

        if (it != data.begin())
            it--, min = std::min(abs(it->first - store.front()), min);
    }

    std::cout << min;
}