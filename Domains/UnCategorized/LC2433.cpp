#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> res(1, num[0]);
    int sum = num[0];

    for (int i = 1; i < num.size(); i++)
    {
        res.push_back(sum ^ num[i]);
        sum ^= res.back();
    }

    for (auto i : res)
        std::cout << i << " ";
}