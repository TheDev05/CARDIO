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

    int k = accumulate(num.begin(), num.end(), 0);
    // if (k & 1)
    //     return false;

    k = k / 2;

    std::vector<int> storage(k + 1, false);
    storage[storage.size() - 1] = true;

    bool result = false;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < storage.size(); j++)
        {
            int index = j + num[i];
            if (index >= storage.size())
                continue;

            if (storage[index])
            {
                storage[j] = true;
            }
        }
    }

    std::cout << storage[0];
}