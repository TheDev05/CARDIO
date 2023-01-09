#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, int sum, int target, int &result, int &min, int index, int local)
{
    if (abs(target - sum) <= min)
    {
        if (abs(target - sum) == min)
            result = std::min(result, sum);
        else
            result = sum;

        min = abs(target - sum);
    }

    if (index >= num.size() || sum >= target)
        return 0;

    if (sum < target)
    {
        for (int i = local; i < 2; i++)
        {
            sum += num[index];
            getCount(num, sum, target, result, min, index, local + 1);
            sum -= num[index];
        }
    }

    getCount(num, sum, target, result, min, index + 1, 0);

    return 0;
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> num1(n), num2(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num1[i];
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> num2[i];
    }

    int k;
    std::cin >> k;

    int min = INT_MAX, result = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        getCount(num2, num1[i], k, result, min, 0, 0);
    }

    std::cout << result << '\n';
}