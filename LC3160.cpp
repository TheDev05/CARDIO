#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    int k;
    std::cin >> k;

    std::map<int, int> data, inox;
    std::vector<int> result;

    for (int i = 0; i < num.size(); i++)
    {
        if (data.contains(num[i][0]))
        {
            if (--inox[data[num[i][0]]] == 0)
                inox.erase(data[num[i][0]]);
        }

        inox[num[i][1]]++;
        data[num[i][0]] = num[i][1];

        result.push_back(inox.size());
    }

    for (auto i : result)
        std::cout << i << " ";
}