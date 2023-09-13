#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<int> &num, int sum, int target, int index)
{
    if (index >= num.size())
        return (sum == target) ? 1 : 0;

    int temp = 0;
    for (int i = index; i < num.size(); i++)
    {
        temp = (temp * 10) + num[i];
        if (traverse(num, sum + temp, target, i + 1))
            return 1;
    }

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        std::vector<int> num;
        int temp = i * i;

        while (temp)
        {
            int dig = temp % 10;
            num.push_back(dig);
            temp = temp / 10;
        }

        reverse(num.begin(), num.end());
        if (traverse(num, 0, i, 0))
            res += i * i;
    }

    std::cout << res;
};