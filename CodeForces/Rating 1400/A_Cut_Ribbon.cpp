#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<int> data, int k, int sum, int &count, int index)
{
    if (index >= num.size())
        return 0;

    if (sum == k)
    {
        count = std::max(count, (int)data.size());
        return 1;
    }

    if (sum < k)
    {
        data.push_back(num[index]);
        if (getCount(num, data, k, sum + num[index], count, index))
            return 1;

        data.pop_back();

        if (getCount(num, data, k, sum, count, index + 1))
            return 1;
    }

    return 0;
}

int main()
{
    int sum, count = 0;
    std::cin >> sum;

    std::vector<int> num(3), data;
    std::cin >> num[0] >> num[1] >> num[2];

    for (int i = 0; i < 3; i++)
    {
        swap(num[i], num[0]);
        getCount(num, data, sum, 0, count, 0);
    }

    std::cout << count << '\n';
}