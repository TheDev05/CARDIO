#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num1(n), num2(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num1[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cin >> num2[i];
    }

    int max = INT_MIN, index = -1;
    std::vector<int> store;

    for (int i = 0; i < n; i++)
    {
        store.push_back(num1[i] - num2[i]);
    }

    for (auto i : store)
        std::cout << i << " ";
    std::cout << '\n';

    for (int i = 0; i < num1.size(); i++)
    {
        if (store[i] > 0)
        {
            int sum = 0, local = i, p = i;
            bool ok = true;

            for (int j = 0; j < num1.size(); j++)
            {
                sum += store[p];

                if (sum < 0)
                {
                    i = p;
                    ok = false;

                    break;
                }

                if (p == num1.size() - 1)
                    p = 0;
                else
                    p++;
            }

            if (ok)
            {
                index = i;
                break;
            }
        }
    }

    if (accumulate(store.begin(), store.end(), 0) < 0)
        index = -1;

    std::cout << index << '\n';
}