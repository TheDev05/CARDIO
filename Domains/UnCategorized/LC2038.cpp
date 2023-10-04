#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int alice = 0, bob = 0;
    for (int i = 0; i < text.size(); i++)
    {
        int count = 0, index = i;
        while (text[i] == text[index])
        {
            index++;
            count++;
        }

        i = index - 1;

        if (text[i] == 'A')
            alice += count - 2;
        else
            bob += count - 2;
    }

    if (alice <= bob)
        std::cout << "Bob";
    else
        std::cout << "Alice";
}