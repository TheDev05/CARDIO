#include <bits/stdc++.h>
using namespace std;

// Subsets using for loop inside recursive function
int getSubsets(std::vector<int> &num, std::vector<int> temp, std::vector<std::vector<int>> &storage, int index)
{
    for (int i = index; i < num.size(); i++)
    {
        temp.push_back(num[i]);
        getSubsets(num, temp, storage, i + 1);
        temp.pop_back();
    }

    storage.push_back(temp);
    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n), temp;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::vector<std::vector<int>> storage;

    getSubsets(num, temp, storage, 0);

    for (auto i : storage)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}