#include <bits/stdc++.h>
using namespace std;

bool isValid(int n)
{
    std::map<int, int> num;
    while (n)
    {
        int last = n % 10;
        num[last]++;

        if (num[last] > last)
            return false;

        n = n / 10;
    }

    for (auto i : num)
        if (i.second != i.first)
            return false;

    return true;
}

int getCount(int num, int temp, int count, int &val, int index)
{
    if (index >= count)
    {
        if (temp > num && temp < val && isValid(temp))
        {
            val = temp;
        }

        return 0;
    }

    for (int i = 1; i <= count; i++)
    {
        getCount(num, (temp * 10) + i, count, val, index + 1);
    }

    return 0;
}

int main()
{
    int num;
    std::cin >> num;

    int val = INT_MAX, count = floor(log10(num) + 1);

    getCount(num, 0, count, val, 0);
    if (val == INT_MAX)
        getCount(num, 0, count + 1, val, 0);

    std::cout << val << '\n';
}