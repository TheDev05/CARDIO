#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<int> &storage, int index)
{
    if (index >= num.size())
        return 0;

    if (storage[index] == -1)
    {
        int val1 = 0, val2 = 0;
        val1 = num[index] + getCount(num, storage, index + 1);
        val2 = num[index] + getCount(num, storage, index + 2);

        storage[index] = std::min(val1, val2);
    }

    return storage[index];
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

    std::vector<int> storage(n + 1, -1);
    std::cout << std::min(getCount(num, storage, 0), getCount(num, storage, 1));
}