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

    k = k % num.size();

    // First Approach O(2n), O(2n)
    // std::vector<int> left, right;

    // for (int i = 0; i < num.size() - k; i++)
    //     left.push_back(num[i]);
    // for (int i = num.size() - k; i < num.size(); i++)
    //     right.push_back(num[i]);

    // int index = 0;
    // for (int i = 0; i < num.size(); i++)
    // {
    //     if (i < k)
    //         num[i] = right[index++];
    //     else
    //     {
    //         if (i == k)
    //             index = 0;

    //         num[i] = left[index++];
    //     }
    // }

    // Second Approach O(n), O(2n)
    // std::vector<int> res;
    // for (int i = num.size() - k; i < num.size(); i++)
    //     res.push_back(num[i]);

    // for (int i = 0; i < num.size() - k; i++)
    //     res.push_back(num[i]);

    // num = res;

    // Third Approach:
    reverse(begin(num), end(num));
    reverse(begin(num), begin(num) + k);
    reverse(begin(num) + k, end(num));

    for (auto i : num)
        std::cout << i << " ";
}