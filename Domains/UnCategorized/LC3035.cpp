#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::map<char, int> data;
    for (auto i : num)
        for (auto j : i)
            data[j]++;

    std::vector<int> temp1, temp2;
    for (auto i : num)
        temp1.push_back(i.size());
    for (auto i : data)
        temp2.push_back(i.second);

    sort(begin(temp1), end(temp1));
    sort(begin(temp2), end(temp2), greater<int>());

    for (int i = 0; i < temp1.size(); i++)
    {
        for (int j = 0; j < temp2.size(); j++)
        {
            if (temp2[j] >= temp1[i])
            {
                temp1[i] = 0, temp2[j] -= temp1[i];
                break;
            }
        }
    }

    std::set<int> inox;
    for (auto i : temp2)
        if (i)
            inox.insert(i);

    for (int i = 0; i < temp1.size(); i++)
    {
        if (temp1[i] == 0)
            continue;
        if (inox.empty())
            break;

        auto it = inox.lower_bound(temp1[i]);
        if (it == inox.begin())
            continue;

        it--;

        if (inox.size() >= 2 && *it + 1 == temp1[i])
        {
            temp1[i] = 0;
            inox.erase(it);

            if (*inox.begin())
            {
                int temp = *inox.begin();
                inox.erase(inox.begin());
                inox.insert(temp - 1);
            }
        }
    }

    int count = 0;
    for (auto i : temp1)
        if (i == 0)
            count++;

    std::cout << count;
}