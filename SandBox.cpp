#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::vector<int> num(5);

    iota(num.begin(), num.end(), 1);
    for (int i = 0; i < num.size(); i++)
    {
        std::cout << num[i] << " ";
    }

    std::cout << '\n';

    for (int i = 0; i < num.size() / 2; i++)
    {
        swap(num[i], num[num.size() - 1 - i]);
    }

    for (int i = 0; i < num.size(); i++)
    {
        std::cout << num[i] << " ";
    }
}