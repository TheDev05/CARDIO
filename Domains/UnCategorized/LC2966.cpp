#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int k;
    std::cin >> k;

    sort(begin(num), end(num));

    std::vector<std::vector<int>> res;
    for (int i = 0; i < num.size(); i++)
    {
        int index = i, count = 3;
        std::vector<int> temp;

        while (index < num.size() && count)
        {
            if (num[index] <= num[i] + k)
                temp.push_back(num[index]);
            else
                break;
                
            index++, count--;
        }

        res.push_back(temp);
        i = index - 1;
    }

    for (auto i : res)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}
