#include <bits/stdc++.h>
using namespace std;

int fillStore(std::vector<int> &num, std::vector<int> &store, int index)
{
    if (index >= num.size())
    {
        return 0;
    }

    if (store[index] == -1)
    {
        store[index] = num[index] + fillStore(num, store, index + num[index]);
    }

    return store[index];
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> num(n), store(n, -1);
        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];
        }

        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (store[i] == -1)
            {
                store[i] =  fillStore(num, store, i);
            }

            max = std::max(max, store[i]);
        }

        std::cout << max << '\n';
    }
}