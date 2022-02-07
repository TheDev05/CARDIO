#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    map<int, int> num;
    num[0] = 1;

    bool ok = false;
    int sum = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (num.count(sum - k))
        {
            ok = true;
            return (ok);
        }

        num[sum]++;
    }

    return (ok);
}