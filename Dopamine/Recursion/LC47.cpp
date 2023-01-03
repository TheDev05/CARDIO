#include <bits/stdc++.h>
using namespace std;

int getPerms(std::vector<int> &num, std::set<int> inox, std::vector<int> &temp, std::vector<std::vector<int>> &storage)
{
    int val = 12;
    for (int i = 0; i < num.size(); i++)
    {
        if (inox.count(i) == false && val != num[i])
        {
            temp.push_back(num[i]);
            inox.insert(i);

            getPerms(num, inox, temp, storage);

            inox.erase(i);
            temp.pop_back();

            val = num[i];
        }
    }

    if (temp.size() == num.size())
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

    sort(num.begin(), num.end());

    std::vector<std::vector<int>> storage;
    std::set<int> inox;
    std::vector<int> temp;

    getPerms(num, inox, temp, storage);

    for (auto i : storage)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}