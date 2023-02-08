#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::vector<int>> &storage, int val, int temp, int n)
{
    if (val == n)
        return 0;

    if (storage[val][temp] == -1)
    {
        int val1 = 1e5, val2 = 1e5;

        if (val + temp <= n)
            val2 = 1 + getCount(storage, val + temp, temp, n);
        if (temp != val)
            val1 = 1 + getCount(storage, val, val, n);

        storage[val][temp] = std::min(val1, val2);
    }

    return storage[val][temp];
}

int main()
{
    int n;
    std::cin >> n;

    if (n == 1)
        std::cout << "0\n";

    std::vector<std::vector<int>> storage(n + 1, std::vector<int>(n + 1, -1));
    std::cout << 1 + getCount(storage, 1, 1, n);
}