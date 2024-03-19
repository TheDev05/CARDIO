#include <bits/stdc++.h>
using namespace std;

void bubbleSort(std::vector<int> &num)
{
    for (int i = 0; i < num.size() - 1; i++)
    {
        bool ok = true;
        for (int j = 0; j < num.size() - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
                swap(num[j], num[j + 1]),
                    ok = false;
        }

        if (ok)
            break;
    }
}

// TC : O(N^2) | O(N)

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    bubbleSort(num);

    for (auto i : num)
        std::cout << i << " ";
}