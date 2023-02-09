#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::vector<std::vector<int>> storage(n + 1, std::vector<int>(2, 0));
    for (int i = storage.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < 2; j++)
        {
            int val = 0;
            for (int k = i + 1; k < num.size(); k++)
            {
                int ok = 0;
                if (num[k] - num[i] > 0)
                    ok = 1;
                else if (num[k] - num[i] < 0)
                    ok = 0;
                else
                    continue;

                if (i == 0 || j != ok)
                    val = std::max(val, storage[k][ok]);
            }

            storage[i][j] = 1 + val;
        }
    }

    std::cout << storage[0][1];
}