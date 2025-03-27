#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::string temp;
    std::cin >> temp;

    int left = 0, right = 0;
    bool ok = false;

    if (text.size() & 1)
        return false;

    int lock = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (temp[i] == '0')
            left++;
        else if (text[i] == ')')
        {
            if (left)
                left--;
            else if (lock)
                lock--;
            else
                ok = true;
        }
        else
            lock++;
    }

    lock = 0;
    for (int i = text.size() - 1; i >= 0; i--)
    {
        if (temp[i] == '0')
            right++;
        else if (text[i] == '(')
        {
            if (right)
                right--;
            else if (lock)
                lock--;
            else
                ok = true;
        }
        else
            lock++;
    }

    if (ok)
        std::cout << "false";
    else
        std::cout << "true";
}
