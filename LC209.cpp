#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int target;
    std::cin >> target;

    int min = INT_MAX, sum = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
        while (sum > target)
        {
            min = std::min(min, (i - index) + 1);

            sum -= num[index];
            index++;
        }

        if (sum == target)
            min = std::min(min, (i - index) + 1);
    }

    if (min == INT_MAX)
        min = 0;

    std::cout << min;
}