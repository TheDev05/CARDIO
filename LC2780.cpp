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
    for (auto i : num)
        data[i]++;

    int temp = INT_MIN, val = 0;
    for (auto i : data)
    {
        if (i.second > temp)
            temp = i.second, val = i.first;
    }

    if (temp <= (num.size() / 2))
        std::cout << "NO";

    int count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == val)
            count++;

        int left = data[val] - count;
        if (count > (i + 1) / 2 && left > (num.size() - (i + 1)) / 2)
            std::cout << i;
    }

    std::cout << "NO";
}