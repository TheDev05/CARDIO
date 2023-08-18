#include <bits/stdc++.h>
#include <string>

using namespace std;

// Function to check if a string is a palindrome.
bool is_palindrome(string S)
{
    for (int i = 0, j = S.length() - 1; i < j; i++, j--)
    {
        if (S[i] != S[j])
        {
            return false;
        }
    }
    return true;
}

// Function to check if the digits in a string are in non-decreasing order.
bool is_non_decreasing(string S)
{
    for (int i = 0; i < S.length() - 1; i++)
    {
        if (S[i] > S[i + 1])
        {
            return false;
        }
    }
    return true;
}

// Function to find all palindromic substrings of a string S of digits,
// such that the digits in the palindromes are in non-decreasing order.
vector<string> find_palindromes(string S)
{
    vector<string> passwords;
    int n = S.length();

    // Initialize the table of longest palindromic substrings.
    vector<vector<bool>> dp(n, vector<bool>(n));
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = true;
    }

    // Fill in the table of longest palindromic substrings.
    for (int i = 0; i < n - 1; i++)
    {
        if (S[i] == S[i + 1])
        {
            dp[i][i + 1] = true;
        }
    }

    for (int l = 3; l <= n; l++)
    {
        for (int i = 0; i <= n - l; i++)
        {
            int j = i + l - 1;
            if (S[i] == S[j] && dp[i + 1][j - 1])
            {
                dp[i][j] = true;
            }
        }
    }

    // Find all palindromic substrings.
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (dp[i][j] && is_non_decreasing(S.substr(i, j - i + 1)))
            {
                passwords.push_back(S.substr(i, j - i + 1));
            }
        }
    }

    return passwords;
}

// Driver code.
int main()
{
    string S;
    std::cin >> S;

    // Find all palindromic substrings of S.
    vector<string> passwords = find_palindromes(S);

    // Print the passwords.
    int max = INT_MIN;
    for (string password : passwords)
    {
        max = std::max(max, (int)password.size());
    }

    int count = 0;
    for (auto i : passwords)
        if (i.size() == max)
            count++;

    std::cout << count << " ";
    for (auto i : passwords)
        if (i.size() == max)
            std::cout << i << " ";

    return 0;
}