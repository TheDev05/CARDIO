#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> data;
    for (int i = 0; i < num.size(); i++)
    {
        int temp = count(num[i].begin(), num[i].end(), '1');
        if (temp)
            data.push_back(temp);
    }

    int sum = 0;
    for (int i = 0; i < data.size() - 1; i++)
    {
        sum += (data[i] * data[i + 1]);
    }

    std::cout << sum;
}