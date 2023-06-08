#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    bool left = false, right = false;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == '0')
        {
            if (left)
            {
                std::cout << "3 1\n";
                left = false;
            }
            else
            {
                std::cout << "1 1\n";
                left = true;
            }
        }
        else
        {
            if (right)
            {
                std::cout << "4 1\n";
                right = false;
            }
            else
            {
                std::cout << "4 3\n";
                right = true;
            }
        }
    }
}