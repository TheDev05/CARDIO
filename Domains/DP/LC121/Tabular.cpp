#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    int min = INT_MAX, result = 0;
    for (int i = 0; i < num.size(); i++)
    {
        result = std::max(result, num[i] - min);
        min = std::min(min, num[i]);
    }

    std::cout << result;
}