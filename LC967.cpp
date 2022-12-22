#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, int val, int n, int k)
{
    int count = floor(log10(val) + 1);
    if (count == n)
    {
        num.push_back(val);
        return 0;
    }
    else if (count > n)
        return 0;

    int temp = val % 10;
    int inox1 = k + temp;
    int inox2 = temp - k;

    if (inox1 < 10)
    {
        getCount(num, (val * 10) + inox1, n, k);
    }
    if (inox2 < 10 && inox2 >= 0)
    {
        getCount(num, (val * 10) + inox2, n, k);
    }
    else
        return 0;

    return 0;
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> num;
    for (int i = 1; i <= 9; i++)
    {
        getCount(num, i, n, k);
    }

    for (auto i : num)
        std::cout << i << " ";
}