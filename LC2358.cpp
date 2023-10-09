#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    sort(num.begin(), num.end());

    int sum = 0, count = 0, res = 0;
    int temp_sum = 0, temp_count = 0;

    for (int i = 0; i < n; i++)
    {
        temp_sum += num[i];
        temp_count++;

        if (temp_sum > sum && temp_count > count)
        {
            sum = temp_sum;
            count = temp_count;

            temp_sum = 0;
            temp_count = 0;

            res++;
        }
    }

    std::cout << res;
}