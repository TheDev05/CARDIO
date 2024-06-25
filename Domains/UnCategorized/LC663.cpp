#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    int root = sqrt(n);
    bool ok = false;

    for (int i = 0; i <= root; i++)
    {
        int temp = n - (i * i);
        double val = sqrt(temp);

        if (ceil(val) == floor(val))
        {
            ok = true;
            break;
        }
    }

    std::cout << ok;
}