#include <bits/stdc++.h>
using namespace std;

int fillStore(std::vector<int> &num, std::vector<int> &temp, std::vector<std::vector<int>> &storage, int sum, int k, int index)
{
    if (sum < k)
    {
        int val = -1;
        for (int i = index; i < num.size(); i++)
        {
            if (val != num[i])
            {
                temp.push_back(num[i]);
                fillStore(num, temp, storage, sum + num[i], k, i + 1);
                temp.pop_back();

                val = num[i];
            }
        }
    }

    if (sum == k)
    {
        storage.push_back(temp);
    }

    return 0;
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    sort(num.begin(), num.end());

    std::vector<std::vector<int>> storage;
    std::vector<int> temp;

    fillStore(num, temp, storage, 0, k, 0);

    for (auto i : storage)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}