#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        std::string temp = "";
        for (int j = 0; j < num[i].size(); j++)
        {
            int dig = (int)(num[i][j] - '0');
            if (dig >= 0 && dig <= 9)
                temp += num[i][j];
        }

        if (temp.size())
            prod *= stoi(temp);
        else
            prod *= num[i].size();
    }

    std::cout << prod;
}