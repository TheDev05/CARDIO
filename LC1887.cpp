#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::map<int, int, greater<int>> data;
    for (auto i : num)
        data[i]++;

    int count = 0, temp = 0;
    while (data.size() > 1)
    {
        count += temp + data.begin()->second;
        temp += data.begin()->second;

        data.erase(data.begin());
    }

    std::cout << count;
}