#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int power, score = 0;
    std::cin >> power;

    ranges::sort(num);

    int start = 0, end = num.size() - 1;
    int max = 0;

    while (start <= end)
    {
        if (num[start] <= power)
            power -= num[start], score++,
                start++;
        else
        {
            if (score)
                power += num[end],
                    score--,
                    end--;
            else
                break;
        }

        max = std::max(max, score);
    }

    std::cout << max;
}