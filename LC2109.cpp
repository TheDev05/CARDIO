#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int m;
    std::cin >> m;

    std::vector<int> spaces(m);
    for (auto &i : spaces)
        std::cin >> i;

    std::set<int> data;
    for (int i = 0; i < spaces.size(); i++)
        data.insert(spaces[i]);

    std::string res;
    for (int i = 0; i < text.size(); i++)
    {
        if (data.contains(i))
            res += " ";
        res += text[i];
    }

    std::cout << res;
}