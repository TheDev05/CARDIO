#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::string result;
    for (int i = 0; i < text.size(); i++)
    {
        int index = i, count = 0;
        while (index < text.size() && count < 9 && text[index] == text[i])
        {
            index++;
            count++;
        }

        result += to_string(count);
        result += text[i];

        i = index - 1;
    }

    std::cout << result;

    // 33: 00 10 01 11 
}