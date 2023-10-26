#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    std::cin >> n >> k;

    int temp = INT_MAX, res = n;
    std::string text;

    while (1)
    {
        temp = k - (n - 1);
        if (temp <= 26)
            break;

        n = n - 1;
        k = k - 26;

        text += 'z';
    }

    if (temp <= 26)
        text += (char)97 + temp - 1;

    for (int i = 0; i <= res - text.size(); i++)
    {
        text += 'a';
    }

    reverse(begin(text), end(text));
    std::cout << text;
}