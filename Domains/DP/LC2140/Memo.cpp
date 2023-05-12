#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, std::vector<int> &store, int index)
{
    if (index >= num.size())
        return 0;

    if (store[index] == -1)
    {
        int sum1 = num[index][0] + traverse(num, store, index + num[index][1] + 1);
        int sum2 = traverse(num, store, index + 1);

        store[index] = std::max(sum1, sum2);
    }

    return store[index];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
        std::cin >> num[i][0] >> num[i][1];

    int max = INT_MIN;
    std::vector<int> store(num.size(), -1);

    std::cout << traverse(num, store, 0);
}