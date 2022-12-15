#include <bits/stdc++.h>
using namespace std;

set<int> inox;
int getCount(int n, int count)
{
    double val = sqrt(n);
    if (ceil(val) != floor(val) || inox.count(val) == false)
    {
        return (count);
    }

    return (getCount(val, count + 1));
    inox.erase(val);
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
        inox.insert(nums[i]);
    }

    sort(nums.begin(), nums.end(), greater<>());

    int max = -1;
    for (int i = 0; i < n; i++)
    {
        double val = sqrt(nums[i]);
        if (ceil(val) == floor(val) && inox.count(nums[i]))
        {
            max = std::max(max, getCount(nums[i], 1));
        }
    }

    std::cout << max << '\n';
}