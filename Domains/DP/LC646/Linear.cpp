#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][0] >> num[i][1];
    }

    std::vector<int> storage(n, 1);
    std::sort(num.begin(), num.end());

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int max = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (num[j][1] < num[i][0])
                max = std::max(max, storage[j]);
        }

        storage[i] = 1 + max;
        result = std::max(result, storage[i]);
    }

    std::cout << result;
}