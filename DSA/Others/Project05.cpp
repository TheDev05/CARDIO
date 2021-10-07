#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    std::cin >> N >> K;

    vector<int> Arr;

    for (int i = 0; i < N; i++)
    {
        int val;
        std::cin >> val;

        Arr.push_back(val);
    }

    int index = 0, result = 0, sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (i < K)
        {
            sum += Arr[i];
        }
        else
        {
            sum += Arr[i];
            sum -= Arr[index];

            index++;
        }

        result = std::max(result, sum);
    }

    return (result);
}