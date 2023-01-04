#include <bits/stdc++.h>
using namespace std;

bool isPalin(std::string text)
{
    for (int i = 0; i < text.size() / 2; i++)
    {
        if (text[i] != text[text.size() - 1 - i])
            return false;
    }

    return true;
}

int getCount(std::string &text, std::string temp, int &count, int index, bool ok)
{
    for (int i = index; i < text.size(); i++)
    {
        if (text[i] != '0')
        {
            char local = text[i];
            temp += text[i];
            text[i] = '0';

            getCount(text, temp, count, i + 1, ok);

            temp.erase(temp.size() - 1);
            text[i] = local;
        }
    }

    if (isPalin(temp))
    {
        std::string temp2;
        int count2 = 0;

        if (ok)
        {
            getCount(text, temp2, count2, 0, false);
            count = std::max(count, (int)(temp.size() * count2));
        }
        else
        {
            count = std::max(count, (int)(temp.size()));
        }
    }

    return 0;
}

int main()
{
    std::string text;
    std::cin >> text;

    int count = 0;
    std::string temp;

    getCount(text, temp, count, 0, true);
    std::cout << count << '\n';
}