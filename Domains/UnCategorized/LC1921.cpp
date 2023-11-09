#include <bits/stdc++.h>
using namespace std;

void thedev05()
{
    int n;
    std::cin >> n;

    std::vector<int> dist(n), speed(n);
    for (auto &i : dist)
        std::cin >> i;

    for (auto &i : speed)
        std::cin >> i;

    std::vector<int> time(dist.size());
    for (int i = 0; i < dist.size(); i++)
    {
        time[i] = dist[i] / speed[i];
    }

    sort(begin(time), end(time));

    int count = 0;
    for (int i = 0; i < dist.size(); i++)
    {
        int temp = time[i] - count;
        if (temp > 0)
            count++;
        else
            break;
    }

    std::cout << count;
}

int main()
{
    thedev05();
}