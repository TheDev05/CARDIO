#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, k;
    std::cin >> N >> k;

    int Arr[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> Arr[i];
    }

    map<int, int> num;
    num[0] = 1;

    int sum = 0, result = 0;

    for (int i = 0; i < N; i++)
    {
        sum += Arr[i];

        if (num.count(sum - k))
        {
            result += num[sum - k];
        }

        num[sum]++;
    }

    return(result);
}