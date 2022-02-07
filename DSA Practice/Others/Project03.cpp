#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* maximum sum Substring of length K: Rivison */

    int n, k;
    std::cin >> n, k;

    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;

        num.push_back(val);
    }

    int sum = 0, index = 0;
    for (int i = 0; i < k; i++)
    {
        sum += num[i];
    }

    int result = sum;
    for (int i = k; i < n; i++)
    {
        sum += num[i];
        sum -= num[index];

        result = std::max(sum, result);
        index++;
    }

    std::cout << result << '\n';
}