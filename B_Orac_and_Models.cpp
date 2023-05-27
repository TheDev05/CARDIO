#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> num(n + 1);
        for (int i = 1; i < num.size(); i++)
        {
            std::cin >> num[i];
        }

        std::vector<int> storage(n + 1, 1);

        storage[0] = -1;
        num[0] = -1;

        int total = 0;
        for (int i = 1; i < num.size(); i++)
        {
            for (int j = i * 2; j < num.size(); j += i)
            {
                if (num[i] < num[j])
                    storage[j] = std::max(storage[j], 1 + storage[i]);
            }
        }

        std::cout << *max_element(storage.begin(), storage.end()) << '\n';
    }
}