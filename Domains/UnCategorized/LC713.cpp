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

    int count = 0, prod = 1, index = 0;
    for (int i = 0; i < num.size(); i++)
    {
        prod *= num[i];

        while (prod >= k && index < i)
        {
            prod /= num[index++];
        }

        if (prod < k)
            count += (i - index);
    }

    for (auto i : num)
        if (i < k)
            count++;

    std::cout << count;
}