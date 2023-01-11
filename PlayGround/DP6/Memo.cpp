#include <bits/stdc++.h>
using namespace std;

int fillStore(std::vector<int> &num, std::set<int> &exist, std::vector<int> &store, int index)
{
    if (exist.count(index + 1) || exist.count(index) || exist.count(index - 1))
        return 0;

    if (store[index] == -1)
    {
        exist.insert(index);
        int val1 = fillStore(num, exist, store, (index + 2) % 4) + num[index];
        exist.erase(index);

        store[index] = val1;
    }

    return store[index];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::vector<int> store(n, -1);
    std::set<int> exist;

    std::cout << std::max(fillStore(num, exist, store, 0), fillStore(num, exist, store, 1));
}