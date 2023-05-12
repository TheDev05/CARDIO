#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, int sum, int &max, int index)
{
    if (index >= num.size())
    {
        max = std::max(max, sum);
        return 0;
    }

    traverse(num, sum + num[index][0], max, index + num[index][1] + 1);
    traverse(num, sum, max, index + 1);

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
        std::cin >> num[i][0] >> num[i][1];

    int max = INT_MIN;
    traverse(num, 0, max, 0);

    std::cout << max;
}