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

    std::priority_queue<int> inox;
    for (auto i : num)
        inox.push(i);

    while (k--)
    {
        int temp = inox.top();
        inox.pop();

        inox.push(temp - (temp / 2));
    }

    int sum = 0;
    while (inox.size())
    {
        sum += inox.top();
        inox.pop();
    }

    std::cout << sum;
}