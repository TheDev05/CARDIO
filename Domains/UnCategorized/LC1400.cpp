#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int k;
    std::cin >> k;

    std::map<char, int> data;
    for (auto i : text)
        data[i]++;

    int count = 0;
    for (auto i : data)
        if (i.second & 1)
            count++;

    if (count == 0)
        count = 1;

    if (k >= count && k <= text.size())
        std::cout << "YES";
    else
        std::cout << "NO";
}