/* Rivison */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    std::cin >> n >> k;

    int index = 0, sum = 0;

    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;

        if (i < k)
        {
            sum += val;
        }

        num.push_back(val);
    }

    int result = sum;
    for (int i = k; i < n; i++)
    {
        sum += num[i];
        sum -= num[index];

        result = std::max(sum, result);
        index++;
    }

    std::cout << result;
}