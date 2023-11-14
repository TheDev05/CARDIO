#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::string temp = "aeiou";

    std::deque<std::pair<int, char>> inox;
    for (int i = 0; i < text.size(); i++)
    {
        if (temp.find(tolower(text[i])) != std::string::npos)
        {
            inox.push_back({(int)text[i], text[i]});
        }
    }

    sort(begin(inox), end(inox));

    for (int i = 0; i < text.size(); i++)
    {
        if (temp.find(tolower(text[i])) != std::string::npos)
            text[i] = inox.begin()->second, inox.pop_front();
    }

    std::cout << text;
}