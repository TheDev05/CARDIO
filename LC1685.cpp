#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int sum = accumulate(begin(num), end(num), 0);
    std::vector<int> res;
    ranges::sort(num);

    int temp = 0;
    for (int i = 0; i < num.size(); i++)
    {
        int val1 = (num[i] * i) - temp;
        temp += num[i];

        int val2 = (sum - temp) - ((num[i] * (num.size() - (i + 1))));
        res.push_back(val1 + val2);
    }

    for (auto i : res)
        std::cout << i << " ";
}