#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, int index, int col)
{
    if (index >= num.size())
        return 0;

    int val1 = 0, val2 = 0;
    val1 = num[index][col] + traverse(num, index + 1, col);
    val2 = num[index][col] + traverse(num, index + 1, col + 1);

    return min(val1, val2);
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        std::vector<int> temp(m);
        for (int j = 0; j < m; j++)
        {
            std::cin >> temp[j];
        }

        num.push_back(temp);
    }

    std::cout << traverse(num, 0, 0);
}