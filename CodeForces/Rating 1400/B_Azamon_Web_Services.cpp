#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<string> num1, num2;
    for (int i = 0; i < n; i++)
    {
        std::string text1, text2;
        std::cin >> text1 >> text2;

        num1.push_back(text1);
        num2.push_back(text2);
    }

    for (int i = 0; i < n; i++)
    {
        map<char, set<int>> data;
        bool ok = true, flag = true;

        if (num1[i] < num2[i])
        {
            std::cout << num1[i] << '\n';
            continue;
        }

        for (int j = 0; j < num1[i].size(); j++)
        {
            data[num1[i][j]].insert(j);
        }

        for (int k = 0; k < std::min(num1[i].size(), num2[i].size()); k++)
        {
            auto it = data.begin();
            if (num1[i][k] > num2[i][k])
            {
                if (it->first < num1[i][k] && it->first <= num2[i][k])
                {
                    swap(num1[i][k], num1[i][*it->second.begin()]);
                    break;
                }
            }
            else
            {
                data[num1[i][k]].erase(k);
                if (data[num1[i][k]].size() == 0)
                    data.erase(num1[i][k]);
            }
        }

        if (num1[i] < num2[i])
        {
            std::cout << num1[i] << '\n';
        }
        else
            std::cout << "---\n";
    }
}