// Jai shree Krishna

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    std::cin >> n >> k;

    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += num[i];
    }

    int min = sum, index = 0;
    for (int i = k; i < n; i++)
    {
        sum += num[i];
        sum -= num[index];

        index++;
        min = std::min(min, sum);
    }

    std::cout << min << '\n';
}