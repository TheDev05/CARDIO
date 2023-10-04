#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text1, text2;
    std::cin >> text1 >> text2;

    int index = 0;
    for (int i = 0; i < text1.size(); i++)
    {
        char toggle = text1[i];
        if (text1[i] == 'z')
            toggle = 'a';
        else
            toggle++;

        if (index < text2.size() && text1[i] == text2[index] || toggle == text2[index])
            index++;
    }

    if (index >= text2.size())
        std::cout << "Yes";
    else
        std::cout << "No";
}