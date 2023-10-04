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

    for (auto i : data)
        std::cout << i.second << " ";

    int count = 0;
    for (auto i : data)
    {
        int sum = 0;
        for (int j = 3; j <= i.second; j += 3)
        {
            if (j > i.second)
                break;

            if ((i.second - j) % 2 == 0)
                sum = j;
        }

        count += (sum / 3) + ((i.second - sum) / 2);
    }

    std::cout << count;
}