#include <bits/stdc++.h>
using namespace std;

int getComb(std::vector<int> &num, std::vector<int> &temp, std::vector<std::vector<int>> &storage, int index)
{
    if (index >= num.size())
    {
        storage.push_back(num);
        return 0;
    }

    for (int i = index; i < num.size(); i++)
    {
        for (int j = i; j < num.size(); j++)
        {
            std::swap(num[i], num[j]);
            getComb(num, temp, storage, i + 1);
            std::swap(num[i], num[j]);
        }

        return 0;
    }

    return 0;
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

    std::vector<int> temp;
    std::vector<std::vector<int>> storage;

    getComb(num, temp, storage, 0);

    std::cout << storage.size() << '\n';
    for (auto i : storage)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}