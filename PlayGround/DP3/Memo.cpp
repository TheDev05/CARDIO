#include <bits/stdc++.h>
using namespace std;

int getStore(int n, int temp, std::vector<int> &num, std::vector<int> &storage)
{
    if (n == num.size() - 1)
    {
        return temp;
    }

    if (storage[n] == -1)
    {
        int val1 = INT_MAX, val2 = INT_MAX;
        val1 = getStore(n + 1, temp + abs(num[n] - num[n + 1]), num, storage);
        if (n < num.size() - 2)
            val2 = getStore(n + 2, temp + abs(num[n] - num[n + 2]), num, storage);

        storage[n] = std::min(val1, val2);
    }

    return storage[n];
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

    std::vector<int> storage(n, -1);
    std::cout << getStore(0, 0, num, storage) << '\n';

    for (auto i : storage)
        std::cout << i << " ";
}