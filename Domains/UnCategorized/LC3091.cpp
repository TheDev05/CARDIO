#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    std::cin >> k;

    int sum = 1, count = 0, min = INT_MAX;
    while (sum < k)
    {
        int temp = ceil(((double)k - sum) / sum);
        count = (sum - 1);

        min = std::min(min, temp + count);
        sum++;
    }

    if (min == INT_MAX)
        min = 0;

    std::cout << min << " ";
}