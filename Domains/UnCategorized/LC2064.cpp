#include <bits/stdc++.h>
using namespace std;

bool isValid(int mid, std::vector<int> &num, int target)
{
    int count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        count += ceil((double)num[i] / mid);
    }

    return (count > target) ? false : true;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int target;
    std::cin >> target;

    int low = 1;
    int high = *max_element(begin(num), end(num));

    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isValid(mid, num, target))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    std::cout << ans;
}