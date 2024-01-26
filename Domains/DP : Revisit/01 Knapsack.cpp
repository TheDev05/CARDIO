#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> value(n), weight(n);
    for (auto &i : weight)
        std::cin >> i;

    for (auto &i : value)
        std::cin >> i;

    int size;
    std::cin >> size;

    std::vector<int> first(size + 1, 0), second(size + 1, 0);
    for (int i = weight.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < first.size(); j++)
        {
            int val1 = 0, val2 = 0;
            if (j - weight[i] >= 0)
                val1 = value[i] + second[j - weight[i]];
            val2 = second[j];

            first[j] = std::max(val1, val2);
        }

        second = first;
    }

    std::cout << first.back();
}