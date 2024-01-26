#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int k;
    std::cin >> k;

    std::vector<int> first(k + 1, 0), second(k + 1, 0);
    second[0] = 1;

    for (int i = num.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < first.size(); j++)
        {
            int val1 = 0, val2 = 0;
            if (j - num[i] >= 0)
                val1 = second[j - num[i]];
            val2 = second[j];

            first[j] = val1 + val2;
        }

        second = first;
    }

    std::cout << first.back();
}