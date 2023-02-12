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

    int total = 0;
    for (auto i : num)
        total += i;

    if (total & 1)
        return 0;

    std::vector<std::vector<int>> storage(num.size() + 1, std::vector<int>(total + 1, 0));
    storage[storage.size() - 1][0] = 1;
    
    for (int i = storage.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < storage[0].size(); j++)
        {
            int val = 0;

            if (storage[i + 1][j - num[i]])
                val = 1;
            if (storage[i + 1][j])
                val = 1;

            storage[i][j] = val;
        }
    }

    std::cout << storage[0][total/2];
}