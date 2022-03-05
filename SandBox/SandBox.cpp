#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::string text;
    std::cin >> text;

    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";

    bool ok1 = false, ok2 = false, ok3 = false, ok4 = false;
    for (int i = 0; i < n; i++)
    {
        if (numbers.find(text[i]) != string::npos)
        {
            ok1 = true;
        }
        else if (lower_case.find(text[i]) != string::npos)
        {
            ok2 = true;
        }
        else if (upper_case.find(text[i]) != string::npos)
        {
            ok3 = true;
        }
        else if (special_characters.find(text[i]) != string::npos)
        {
            ok4 = true;
        }
    }

    if ()
    {
        /* code */
    }
    
}
