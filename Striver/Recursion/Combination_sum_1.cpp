// LeetCode : Combination Sum - I

#include <bits/stdc++.h>
using namespace std;

int getCom(std::vector<int> num, std::vector<int> data, int index, int sum, int k)
{

    if (index >= num.size())
    {
        if (sum == k)
        {
            for (auto i : data)
                std::cout << i << " ";
            std::cout << "\n";
        }

        return (0);
    }

    if (sum > k)
    {
        return (0);
    }
    else
    {
        sum += num[index];
        data.push_back(num[index]);
        getCom(num, data, index, sum, k);

        sum -= num[index];
        data.pop_back();
    }

    getCom(num, data, index + 1, sum, k);
    return (0);
}

int main()
{
    int n, k = 0;
    std::cin >> n >> k;

    std::vector<int> num(n), data;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    getCom(num, data, 0, 0, k);
}