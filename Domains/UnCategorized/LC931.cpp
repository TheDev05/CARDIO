#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num(n, std::vector<int>(m, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    std::vector<int> first(m), second(m, 0);
    for (int i = num.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < num[0].size(); j++)
        {
            int min = second[j];
            if (j - 1 >= 0)
                min = std::min(min, second[j - 1]);
            if (j + 1 < num[0].size())
                min = std::min(min, second[j + 1]);

            first[j] = min + num[i][j];
        }

        second = first;
    }

    std::cout << *min_element(begin(first), end(first));
}