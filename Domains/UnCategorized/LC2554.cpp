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

    int max;
    std::cin >> max;

    std::set<int> data;
    for (auto i : num)
        data.insert(i);

    int sum = 0, count = 0;
    for (int i = 1; i <= k; i++)
    {
        if (data.contains(i) == false && sum + i <= max)
        {
            sum += i;
            count++;
        }
    }

    std::cout << count;
}