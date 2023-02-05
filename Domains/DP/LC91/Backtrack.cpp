#include <bits/stdc++.h>
using namespace std;

int getCount(std::string &text, int index)
{
    if (index >= text.size())
        return 1;

    std::string temp;

    int val1 = 0;
    for (int i = index; i < text.size(); i++)
    {
        temp += text[i];
        if (temp.size() < 3 && stoi(temp) == 0)
            return 0;
        if (temp.size() < 3 && stoi(temp) < 27)
            val1 += getCount(text, i + 1);
    }

    return val1;
}

int main()
{
    std::string text;
    std::cin >> text;

    std::cout << getCount(text, 0);
}