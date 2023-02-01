#include <bits/stdc++.h>
using namespace std;

int getSubs(std::vector<int> &num, std::vector<int> &temp, std::vector<std::vector<int>> &storage, int index)
{
    for (int i = index; i < num.size(); i++)
    {
        if (i > index && num[i] == num[i - 1])
            continue;

        temp.push_back(num[i]);
        getSubs(num, temp, storage, i + 1);
        temp.pop_back();
    }

    storage.push_back(temp);
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
    std::set<int> inox;

    sort(num.begin(), num.end());
    getSubs(num, temp, storage, 0);

    for (auto i : storage)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}