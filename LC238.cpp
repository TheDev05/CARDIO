#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> prefix(n), suffix(n);

    int pre = 1, suff = 1;
    for (int i = 0; i < n; i++)
    {
        pre *= num[i];
        suff *= num[num.size() - 1 - i];

        prefix[i] = pre;
        suffix[num.size() - 1 - i] = suff;
    }

    std::vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        int temp = 1;

        if (i - 1 >= 0)
            temp = prefix[i - 1];
        if (i + 1 < n)
            temp *= suffix[i + 1];

        result[i] = temp;
    }

    for (auto i : result)
        std::cout << i << " ";
}