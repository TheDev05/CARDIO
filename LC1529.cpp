#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int idx = text.find('1');
    if (idx == std::string::npos)
        std::cout << "0\n";

    int temp = 0, count = 0;
    for (int i = idx; i < text.size(); i++)
    {
        if (text[i] != temp)
        {
            count++;
            temp = text[i];
        }
    }

    std::cout << count;
}