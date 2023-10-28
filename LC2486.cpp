#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text1, text2;
    std::cin >> text1 >> text2;

    int index = 0;
    for (int i = 0; i < text1.size(); i++)
    {
        if (index < text2.size() && text1[i] == text2[index])
            index++;
    }

    std::cout << text2.size() - index;
}