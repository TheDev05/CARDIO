#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int deltaSum, deltaIndex;
    std::cin >> deltaIndex >> deltaSum;

    std::map<int, int> data;
    for (auto i : num)
        data[i]++;

    std::deque<int> store;
    for (int i = 0; i < deltaIndex + 1; i++)
    {
        store.push_back(num[i]);

        data[num[i]]--;
        if (data[num[i]] == 0)
            data.erase(num[i]);
    }

    data[num[deltaIndex]]++;

    int delta1 = data.begin()->first;
    int delta2 = data.rbegin()->first;

    int ans = 0;
    if (abs(delta1 - store.front()) >= deltaSum || abs(delta1 - store.front()) >= deltaSum)
        ans = 0;

    for (int i = deltaIndex + 1; i <= (num.size() - deltaIndex); i++)
    {
        data[store.front()]--;
        if (data[store.front()] == 0)
            data.erase(store.front());
        store.pop_front();

        int delta1 = data.begin()->first;
        int delta2 = data.rbegin()->first;

        if (abs(delta1 - store.front()) >= deltaSum || abs(delta1 - store.front()) >= deltaSum)
            ans = i;

        data[num[i]]--;
        if (data[num[i]] == 0)
            data.erase(num[i]);
        store.push_back(num[i]);
    }

    std::cout << ans;
}