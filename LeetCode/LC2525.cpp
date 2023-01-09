#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, w, h, m;
    std::cin >> l >> w >> h >> m;

    bool bulky = false, heavy = false, both = false, neither = false;

    if (std::max({l, w, h, m}) >= 1e4 || (l * b * h) >= 1e9)
        bulky = true;

    if (m >= 100)
        heavy = true;

    if (both && heavy)
        both = true;

    if (both == false && heavy == false)
        neither = true;

    if (bulky)
        return "Bulky";

    if (heavy)
        return "Heavy";

    if (both)
        return "Both";

    if (neither)
        return "Neither";
}