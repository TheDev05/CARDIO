#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int max = 0, min = INT_MAX;
    int index_min = 0, index_max = 0;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
            max = num[i], index_max = i;

        if (num[i] < min)
            min = num[i], index_min = i;
    }

    int val1 = 0, val2 = 0;
    val1 = std::min(index_max + 1, (int)(num.size() - index_max));
    if (index_min > index_max)
        val2 = std::min(index_min - index_max, (int)(num.size() - index_min));
    else
        val2 = std::min(index_max - index_min, index_min + 1);

    std::cout << val1 + val2;
}