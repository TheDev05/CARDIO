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

    std::map<int, int> data;

    int res = 0, index = 0;
    for (int i = 0; i < num.size(); i++)
    {
        data[num[i]]++;
        while (data[num[i]] > k)
        {
            if (--data[num[index]] == 0)
                data.erase(num[index]);

            index++;
        }

        res = std::max(res, (i - index) + 1);
    }

    std::cout << res;
}
