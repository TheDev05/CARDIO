//****FUNCTION OVERLOADING****

#include <iostream>
using namespace std;

int geo(int);
int geo(int, int);
int geo(int, int, int);

int main()
{
    int l, b, h, r;
    l = 2;
    b = 4;
    h = 3;
    r = 2;

    cout << "AREA OF RECTANGLE: " << geo(l, b) << endl;
    cout << "AREA OF CIRCLE: " << geo(r) << endl;
    cout << "VOLUME OF CUBE: " << geo(l, b, h) << endl;
    return (0);
}

int geo(int r)
{
    return (r * r);
}

int geo(int l, int b)
{
    return (l * b);
}

int geo(int l, int b, int h)
{
    return (l * b * h);
}
