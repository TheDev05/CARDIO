#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int max = 0, index = 0;
    int one = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (num[i])
            one++;
        else
            zero++;

        while (zero >= 2)
        {
            if (num[index])
                one--;
            else
                zero--;
                
            index++;
        }

        if (zero < 2)
            max = std::max(max, one);
    }

    std::cout << max;
}