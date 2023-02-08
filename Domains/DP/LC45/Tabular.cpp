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

    std::vector<int> storage(num.size(), 0);
    for (int i = num.size() - 2; i >= 0; i--)
    {
        int val = 1e5;
        for (int j = 1; j <= num[i]; j++)
        {
            if (i + j < num.size())
            {
                val = std::min(val, storage[i + j]);
            }
            else
                break;
        }

        storage[i] = 1 + val;
    }

    std::cout << storage[0];
}