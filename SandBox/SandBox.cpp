#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    std::cin >> N >> K;

    vector<int> arr;

    for (int i = 0; i < N; i++)
    {
        int avl;
        std::cin >> avl;

        arr.push_back(avl);
    }

    int index = 0, result = 0;
    sort(arr.begin(), arr.end());

    while (K > 0 && index < N)
    {
        K = K - arr[index];

        if (K >= 0)
        {
            result++;
        }

        index++;
    }

    return (result);

    // std::cout << result;
}