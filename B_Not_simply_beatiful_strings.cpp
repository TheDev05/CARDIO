#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::map<char, int> data;
    for (auto i : text)
        data[i]++;

    if (data.size() == 1 || data.size() > 4)
    {
        std::cout << "No\n";
        return 0;
    }

    std::string result;
    for (auto i : data)
    {
        if (i.second == 1)
            result += i.first;
        else
        {
            result += i.first;
            result += i.first;
        }

        if (result.size() >= 4)
            break;
    }

    if (result.size() >= 4)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}