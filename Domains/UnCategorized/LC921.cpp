#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::stack<char> data;

    int count = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ')')
            if (data.empty())
                count++;
            else
                data.pop();
        else
            data.push(text[i]);
    }

    count += data.size();

    std::cout << count;
}