#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int count = 0, temp = num[0];
    for (int i = 0; i < n; i++)
    {
        if (temp == num[i])
            count++;
        else
            count--;

        if (count == 0 && i + 1 < num.size())
            temp = num[i + 1];
    }

    count = 0;
    for (auto i : num)
        if (i == temp)
            count++;

    if (count > num.size() / 2)
        std::cout << temp;
}