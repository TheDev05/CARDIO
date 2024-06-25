#include <bits/stdc++.h>
using namespace std;

int main()
{
    int idx, time;
    std::cin >> idx >> time;

    std::vector<long long> num(idx + 1, 1);

    for (int i = 0; i < time; i++)
    {
        long long sum = 0;
        for (int j = 0; j < num.size(); j++)
        {
            sum += num[j];
            num[j] = sum;
        }

        for (auto k : num)
            std::cout << k << " ";
        std::cout << '\n';
    }

    for (auto i : num)
        std::cout << i << " ";
}