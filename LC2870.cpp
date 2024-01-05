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

    int count = 0;
    for (auto i : data)
        if (i.second == 1)
        {
            count = -1;
            break;
        }
        else
            count += ceil((double)i.second / 3);

    std::cout << count;
}