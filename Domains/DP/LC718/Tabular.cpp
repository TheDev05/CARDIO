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
    std::vector<std::vector<int>> storage(n + 1, std::vector<int>(m + 1, 0));
    for (int i = storage.size() - 2; i >= 0; i--)
    {
        for (int j = storage[0].size() - 2; j >= 0; j--)
        {
            if (num1[i] == num2[j])
                storage[i][j] = 1 + storage[i + 1][j + 1];
            else
                storage[i][j] = 0;

            max = std::max(max, storage[i][j]);
        }
    }

    std::cout << max;
}