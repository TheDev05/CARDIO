#include <bits/stdc++.h>
using namespace std;

void traverse(std::vector<int> &num, std::vector<int> &temp, std::vector<std::vector<int>> &store, int index)
{
    if (index >= num.size())
    {
        store.push_back(temp);
        return;
    }

    temp.push_back(num[index]);
    traverse(num, temp, store, index + 1);

    temp.pop_back();
    traverse(num, temp, store, index + 1);
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n), temp;
    std::vector<std::vector<int>> store;

    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::vector<int> temp;
    std::vector<std::vector<int>> store;
    
    traverse(num, temp, store, 0);

    for (auto i : store)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}