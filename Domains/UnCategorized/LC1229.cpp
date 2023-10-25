#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::stack<std::pair<char, int>> data;
    std::set<int> idx;

    int count = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ')')
            if (data.empty())
                idx.insert(i);
            else
                data.pop();
        else if (text[i] == '(')
            data.push({text[i], i});
    }

    std::string res;
    while (data.size())
    {
        idx.insert(data.top().second);
        data.pop();
    }

    for (int i = 0; i < text.size(); i++)
    {
        if (idx.count(i) == false)
            res += text[i];
    }

    std::cout << res;
}