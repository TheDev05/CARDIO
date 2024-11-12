#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1;
    std::cout << a << " " << b << " ";

    for (int i = 0; i < 9; i++)
    {
        int c = a + b;
        std::cout << c << " ";

        a = b;
        b = c;
    }
}