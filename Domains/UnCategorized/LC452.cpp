#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][0] >> num[i][1];
    }

    std::vector<std::pair<int, int>> data;
    for (int i = 0; i < n; i++)
    {
        data.push_back({num[i][0], num[i][1]});
    }

    sort(begin(data), end(data));

    int left = 0, right = 0, count = 0;
    bool ok = true;

    for (int i = 0; i < data.size(); i++)
    {
        if (count == 0)
        {
            count++;

            left = data[i].first;
            right = data[i].second;
        }
        else
        {
            if (data[i].first <= right)
            {
                left = std::max(left, data[i].first);
                right = std::min(right, data[i].second);
            }
            else
            {
                count++;

                left = data[i].first;
                right = data[i].second;
            }
        }
    }

    std::cout << count;
}