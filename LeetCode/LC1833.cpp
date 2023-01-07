#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    sort(num.begin(), num.end());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (k < num[i])
            break;

        k -= num[i];
        count++;
    }

    std::cout << count << '\n';
}