#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &storage, int sum, int copy, int target)
{
    if (sum > target)
        return 1e5;
    if (sum == target)
        return 0;

    if (storage[sum][copy] == -1)
    {
        int val1 = 1e5, val2 = 1e5;
        if (copy != sum)
            val1 = 1 + traverse(storage, sum, sum, target);
        val2 = 1 + traverse(storage, sum + copy, copy, target);

        storage[sum][copy] = std::min(val1, val2);
    }

    return storage[sum][copy];
}

int main()
{
    int n;
    std::cin >> n;

    if (n == 1)
        return 0;

    std::vector<std::vector<int>> storage(n + 1, std::vector<int>(n + 1, -1));
    std::cout << 1 + traverse(storage, 1, 1, n);
}