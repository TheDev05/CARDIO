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
    {
        data[i]++;

        if (data[i] > 1)
            return true;
    }

    return false;
}