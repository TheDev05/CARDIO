#include <bits/stdc++.h>
using namespace std;

int getCount(std::string text, std::set<std::string> &data, int index)
{
    if (index >= text.size())
        return 1;

    std::string local;
    for (int i = index; i < text.size(); i++)
    {
        local += text[i];
        if (data.count(local))
        {
            if (getCount(text, data, i + 1))
                return 1;
        }
    }

    return 0;
}

int main()
{
    std::string text;
    std::cin >> text;

    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::set<std::string> data;
    for (auto i : num)
        data.insert(i);

    std::cout << getCount(text, data, 0);
}