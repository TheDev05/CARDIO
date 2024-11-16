#include <bits/stdc++.h>
using namespace std;

bool isValid(int mid, std::vector<int> &num, int hours)
{
    int count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        count += ceil((double)num[i] / mid);
    }

    if (count > hours)
        return false;

    return true;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int hours;
    std::cin >> hours;

    int low = 1;
    int high = accumulate(begin(num), end(num), 0);

    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isValid(mid, num, hours))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    std::cout << ans;
}