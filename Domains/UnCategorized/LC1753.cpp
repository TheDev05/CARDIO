#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    // 4 4 6
    // 1 4 6
    // 2 4 6

    std::vector<int> num;

    num.push_back(a);
    num.push_back(b);
    num.push_back(c);

    sort(begin(num), end(num));

    int req = num[2] - num[1];
    if (num[0] >= req)
    {
        num[0] -= req;
        num[1] = num[2];

        req = num[0];
        req = req / 2;

        num[1] += req;
        num[2] += req;
    }
    else
    {
        num[1] += num[0];
    }

    std::cout << std::min(num[1], num[2]);
}