#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    std::map<int, std::pair<int, std::pair<int, int>>> data;

    int max = 0, inox = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];

        if (data.count(num[i]))
            data[num[i]].second.second = i;
        else
            data[num[i]].second.first = i;

        data[num[i]].first++;
        max = std::max(max, data[num[i]].first);
    }

    int min = INT_MAX, left = 0, right = 0;
    for (auto i : data)
    {
        if (i.second.first == max)
        {
            int delta = i.second.second.second - i.second.second.first;
            if (delta < min)
            {
                min = delta;

                left = i.second.second.first;
                right = i.second.second.second;
            }
        }
    }

    if (left > right)
        left = 0, right = 0;

    std::cout << left + 1 << " " << right + 1 << '\n';
}