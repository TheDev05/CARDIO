#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::map<int, int> data;
    for (auto i : num)
        data[i]++;

    int sum = 0;
    for (auto i : data)
    {
        if (i.second % (i.first + 1) == 0)
            sum += i.second;
        else
        {
            sum += i.second + (i.first + 1) - (i.second % (i.first + 1));
        }
    }

    std::cout << sum;
}