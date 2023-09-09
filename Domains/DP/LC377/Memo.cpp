#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<int> &num, std::vector<std::vector<int>> &storage, int target)
{
    if (target == 0)
        return 1;

    if (target < 0)
        return 0;

    int count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (storage[i][target] == -1)
            storage[i][target] = traverse(num, storage, target - num[i]);

        count += storage[i][target];
    }

    return count;
}

int main()
{
    int n;
    std::cin >> n;

    int target;
    std::cin >> target;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<std::vector<int>> storage(n, std::vector<int>(target + 1, -1));
    std::cout << traverse(num, storage, target);
}