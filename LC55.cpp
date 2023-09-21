#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<int> &num, std::vector<int> &storage, int index)
{
    if (index == num.size() - 1)
        return 1;

    if (index >= num.size())
        return 0;

    if (storage[index] == -1)
    {
        for (int i = 1; i <= num[index]; i++)
        {
            if (index + i >= num.size())
                break;
            if (traverse(num, storage, index + i))
                return 1;
        }
    }

    return storage[index] = 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> storage(num.size() + 1, -1);
    std::cout << traverse(num, storage, 0);
}