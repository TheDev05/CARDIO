#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<int> &num, int sum, int target)
{
    if (sum == target)
        return 1;

    if (sum > target)
        return 0;

    int count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        count += traverse(num, sum + num[i], target);
    }

    return count;
}

int main()
{
    int n;
    std::cin >> n;

    int target;
    std::cin >> target;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::cout << traverse(num, 0, target);
}