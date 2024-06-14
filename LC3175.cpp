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

    std::vector<int> temp;
    std::set<std::pair<int, int>> data;

    for (int i = 0; i < num.size(); i++)
    {
        data.insert({i, num[i]});
    }

    temp = num;

    std::map<int, int> inox;
    int ans = 0;

    while (data.size() >= 2)
    {
        auto it = data.begin();
        int first = it->second;
        int index1 = it->first;

        it++;

        int second = it->second;
        int index2 = it->first;

        auto it1 = data.rbegin();
        int last = it1->first;

        if (first > second)
        {
            data.erase({index2, second});
            data.insert({last + 1, second});

            inox[first]++;

            if (inox[first] >= k)
            {
                ans = first;
                break;
            }
        }
        else
        {
            data.erase({index1, first});
            data.insert({last + 1, first});

            inox[second]++;

            if (inox[second] >= k)
            {
                ans = second;
                break;
            }
        }
    }

    for (int i = 1; i <= temp.size(); i++)
    {
        if (ans == temp[i])
    }
}