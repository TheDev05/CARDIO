#include <bits/stdc++.h>
using namespace std;

long long maxScore(const vector<int> &A)
{
    int N = A.size();
    vector<long long> dp(N, LLONG_MIN);

    dp[0] = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            dp[j] = max(dp[j], dp[i] + A[j] * (j - i));
        }
    }

    return dp[N - 1];
}

int main()
{
    int n;
    std::cin >> n;

    vector<int> A(n);

    for (auto &i : A)
        std::cin >> i;

    std::cout << maxScore(A);
}
