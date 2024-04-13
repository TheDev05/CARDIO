#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int countArrangements(int P, int C, int N) {
    // Initialize a 2D array to store the number of arrangements
    vector<vector<int>> dp(P + 1, vector<int>(C + 1, 0));

    // Base case: when both subjects are taught for 0 hours
    dp[0][0] = 1;

    // Populate the dp table
    for (int i = 0; i <= P; ++i) {
        for (int j = 0; j <= C; ++j) {
            // If previous P hours are less than or equal to N, add to current state
            if ((i == 0 || (j > 0 && dp[i][j - 1] > 0)) && i > 0)
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;

            // If previous C hours are less than or equal to N, add to current state
            if ((j == 0 || (i > 0 && dp[i - 1][j] > 0)) && j > 0)
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
        }
    }

    // The result is stored in the bottom-right corner of the dp table
    return dp[P][C];
}

int main() {
    int P, C, N;
    cin >> P >> C >> N;

    int arrangements = countArrangements(P, C, N);
    cout << arrangements << endl;

    return 0;
}
