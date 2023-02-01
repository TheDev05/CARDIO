#include <bits/stdc++.h>
using namespace std;

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

    int max = INT_MIN;
    std::vector<int> prev(m + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < prev.size() - 1; j++)
        {
            if (num1[i] == num2[j])
                prev[j] = 1 + prev[j + 1];
            else
                prev[j] = 0;

            max = std::max(max, prev[j]);
        }
    }

    std::cout << max;
}