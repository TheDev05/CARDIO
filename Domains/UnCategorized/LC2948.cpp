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

    std::map<int, std::set<int, greater<int>>> data;
    for (int i = 0; i < num.size(); i++)
    {
        data[num[i]].insert(i);
    }

    /*
    Input : nums = [1,5,3,9,8], k = 2
    Output: [1,3,5,8,9]
    */

    for (int i = 0; i < num.size(); i++)
    {
        data[num[i]].erase(i);
        if (data[num[i]].empty())
            data.erase(num[i]);

        if (data.size())
        {
            while (1)
            {
                auto it = data.lower_bound(num[i] - k);
                if (it != data.end() && num[i] > it->first && abs(num[i] - it->first) <= k)
                {
                    int temp = num[i];
                    num[*it->second.begin()] = num[i];
                    num[i] = it->first;

                    data[temp].insert(*it->second.begin());
                    data[it->first].erase(*it->second.begin());

                    if (data[it->first].empty())
                        data.erase(it->first);
                }
                else
                    break;
            }
        }
    }

    for (auto i : num)
        std::cout << i << " ";
}