#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::string text;
    std::cin >> text;

    for (int i = 0; i < n; i++)
    {
        int index = i + 1;
        if (n % index == 0)
        {
            reverse(text.begin(), text.begin() + index);
        }
    }

    std::cout << text << '\n';
}