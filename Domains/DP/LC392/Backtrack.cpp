#include <bits/stdc++.h>
using namespace std;

int getCount(std::string text1, std::string text2, int index1, int index2)
{
    if (index1 >= text1.size())
        return 1;
    if (index2 >= text2.size())
        return 0;

    if (text1[index1] == text2[index2])
    {
        if (getCount(text1, text2, index1 + 1, index2 + 1))
            return 1;
    }
    else
    {
        if (getCount(text1, text2, index1, index2 + 1))
            return 1;
    }

    return 0;
}

int main()
{
    std::string text1, text2;
    std::cin >> text1 >> text2;

    std::cout << getCount(text1, text2, 0, 0);
}