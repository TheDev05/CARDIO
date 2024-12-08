#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int total;
    std::cin >> total;

    sort(begin(num), end(num));
    std::deque<int> data;

    for (auto i : num)
        data.push_back(i);

    int point = 0;
    while (data.size())
    {
        if (total >= data.front())
        {
            point += total / data.front();
            total -= total % data.front();
        }
        else if (point)
        {
            total += data.back();
            data.pop_back();
        }
    }

    std::cout << point;
}