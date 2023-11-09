#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sx, sy, fx, fy;
    std::cin >> sx >> sy >> fx >> fy;

    int t;
    std::cin >> t;

    if (fx == sx && fy == sy)
    {
        if (t == 1)
            return false;
        else
            return true;
    }

    if (fy <= sy)
        fy = (sy - fy) + sy;
    if (fx <= sx)
        fx = (sx - fx) + sx;

    int val1 = abs(sx - 1), val2 = abs(sy - 1);

    fx = fx - val1, fy = fy - val2;
    sx = 1, sy = 1;

    int max = std::max(abs(sx - fx), abs(sy - fy));
    int min = std::max(abs(sx - fx), abs(sy - fy));
    int sum = min + (max - min);

    if (t >= sum)
        return true;
    return false;
}