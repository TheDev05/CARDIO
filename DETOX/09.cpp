#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<int> &num, std::vector<int> &temp, std::vector<std::vector<int>> &result, int target, int index)
{
    if (index >= num.size())
        return 0;

    if (target == 0)
    {
        result.push_back(temp);
        return 0;
    }

    if (target - num[index] >= 0)
    {
        temp.push_back(num[index]);
        traverse(num, temp, result, target - num[index], index);
        temp.pop_back();
    }

    traverse(num, temp, result, target, index + 1);
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

    std::vector<int> temp;
    std::vector<std::vector<int>> result;

    traverse(num, temp, result, k, 0);

    for (auto i : result)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}