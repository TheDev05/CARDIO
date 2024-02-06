#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::map<int, int> data;
    int res = 0, index = 0;

    for (int i = 0; i < num.size(); i++)
    {
        data[num[i]]++;

        while (data.size() > 2)
        {
            if (--data[num[index]] == 0)
                data.erase(num[index]);

            index++;
        }

        auto it = data.begin();
        res = std::max(res, it->second + (++it)->second);
    }

    std::cout << res;
}