#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* First Negative number in every window: Rivison */

    int n, k;
    std::cin >> n >> k;

    vector<int> num, neg;
    for (int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;

        if (i < k && val < 0)
        {
            neg.push_back(val);
        }

        num.push_back(val);
    }

    int index = 0;
    vector<int> result;

    if (neg.size() != 0)
    {
        result.push_back(neg[0]);
    }

    for (int i = k; i < n; i++)
    {
        if (num[i] < 0)
        {
            neg.push_back(num[i]);
        }

        if (num[index] < 0)
        {
            neg.erase(neg.begin());
        }

        if (neg.size() != 0)
        {
            result.push_back(neg[0]);
        }

        index++;
    }

    for (auto i : result)
        std::cout << i << " ";
}