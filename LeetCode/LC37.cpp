#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, char k, std::vector<std::vector<char>> &num)
{
    int left = i - (i % 3);
    int right = j - (j % 3);

    int temp = right;
    left--;

    for (int p = 0; p < 9; p++)
    {
        if (p % 3 == 0)
        {
            left++;
            right = temp;
        }

        if (num[i][p] == k)
            return false;
        if (num[p][j] == k)
            return false;
        if (num[left][right] == k)
            return false;

        right++;
    }

    return true;
}

bool fill(std::vector<std::vector<char>> &num)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (num[i][j] == '.')
            {
                for (char k = '1'; k <= '9'; k++)
                {
                    if (isValid(i, j, k, num))
                    {
                        num[i][j] = k;

                        if (fill(num))
                            return true;

                        num[i][j] = '.';
                    }
                }

                return false;
            }
        }
    }

    return true;
}

int main()
{
    vector<vector<char>> num{
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}};

    fill(num);

    for (auto i : num)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}