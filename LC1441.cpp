#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int k;
    std::cin >> k;

    std::vector<std::string> res;
    int temp = 0;

    for (int i = 0; i < num.size(); i++)
    {
        int count = abs(temp - num[i]);

        for (int j = 0; j < count - 1; j++)
            res.push_back("Push"), res.push_back("Pop");

        res.push_back("Push");
        temp = num[i];
    }

    for (auto i : res)
        std::cout << i << " ";
}