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

    std::set<int> win;
    std::map<int, int> lose;

    for (auto i : num)
        win.insert(i[0]), lose[i[1]]++;

    std::vector<std::vector<int>> res(2);
    for (auto i : win)
        if (lose.contains(i) == false)
            res[0].push_back(i);

    for (auto i : lose)
        if (i.second == 1)
            res[1].push_back(i.first);

    for (auto i : res)
        std::cout << i << " ";
}