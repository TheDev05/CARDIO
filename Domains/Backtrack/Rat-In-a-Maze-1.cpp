#include <bits/stdc++.h>
using namespace std;

int getPath(std::vector<std::vector<int>> &num, std::string text, std::vector<std::string> &result, int i, int j)
{
    if (num[i][j] == 0)
        return 0;

    if (i == num.size() - 1 && j == num[0].size() - 1)
    {
        result.push_back(text);
        return 0;
    }

    if (i != 0)
    {
        int temp = num[i][j];
        num[i][j] = 0;

        getPath(num, text + 'U', result, i - 1, j);
        num[i][j] = temp;
    }

    if (i != num.size() - 1)
    {
        int temp = num[i][j];
        num[i][j] = 0;

        getPath(num, text + 'D', result, i + 1, j);
        num[i][j] = temp;
    }

    if (j != 0)
    {
        int temp = num[i][j];
        num[i][j] = 0;

        getPath(num, text + 'L', result, i, j - 1);
        num[i][j] = temp;
    }

    if (j != num[0].size() - 1)
    {
        int temp = num[i][j];
        num[i][j] = 0;

        getPath(num, text + 'R', result, i, j + 1);
        num[i][j] = temp;
    }

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(
        {{1, 0, 0, 0},
         {1, 1, 0, 1},
         {1, 1, 0, 0},
         {0, 1, 1, 1}});

    std::vector<std::string> result;
    std::string text;

    // if (num[0][0] == 0 || num[n - 1][n - 1] == 0)
    //     return result;

    getPath(num, text, result, 0, 0);

    // return result;

    for (auto i : result)
        std::cout << i << '\n';
}