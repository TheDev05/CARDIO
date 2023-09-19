#include <bits/stdc++.h>
using namespace std;

int traverse(int temp, int n, std::vector<int> &num)
{
    if (temp > n)
        return 0;

    num.push_back(temp);
    for (int i = 0; i < 10; i++)
    {
        traverse((temp * 10) + i, n, num);
    }

    return 1;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num;
    for (int i = 1; i < 10; i++)
    {
        traverse(i, n, num);
    }

    for (auto i : num)
        std::cout << i << " ";
}