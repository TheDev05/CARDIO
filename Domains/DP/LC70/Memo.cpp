#include <bits/stdc++.h>
using namespace std;

int getCount(int index, std::vector<int> &storage, int n)
{
    if (index == n)
        return 1;

    if (storage[index] == -1)
    {
        int val1 = 0, val2 = 0;
        if (index + 1 <= n)
            val1 = getCount(index + 1, storage, n);
        if (index + 2 <= n)
            val2 = getCount(index + 2, storage, n);

        storage[index] = val1 + val2;
    }

    return storage[index];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> storage(n + 1, -1);
    std::cout << getCount(0, storage, n);
}