#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::string temp = "CODEFORCES";
    std::string result1, result2;

    for (int i = 0; i < text.size(); i++)
    {
        int index1 = i, index2 = 0;
        while (text[index1] == temp[index2] && index1 < text.size() && index2 < temp.size())
        {
            result1 += text[index1];

            index1++;
            index2++;
        }

        if (text[index1] != temp[index2])
            break;
    }

    reverse(text.begin(), text.end());
    reverse(temp.begin(), temp.end());

    for (int i = 0; i < text.size(); i++)
    {
        int index1 = i, index2 = 0;
        while (text[index1] == temp[index2] && index1 < text.size() && index2 < temp.size())
        {
            result2 += text[index1];

            index1++;
            index2++;
        }

        if (text[index1] != temp[index2])
            break;
    }

    reverse(result2.begin(), result2.end());
    result1 += result2;

    std::set<std::pair<int, char>> data;

    std::string inox = "CODEFORCES";
    text = result1;

    for (int i = 0; i < inox.size(); i++)
    {
        data.insert({i, inox[i]});
    }

    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == data.begin()->second)
            data.erase(data.begin());
    }

    if (data.empty())
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}