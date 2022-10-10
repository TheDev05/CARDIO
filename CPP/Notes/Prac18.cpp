//****DEFAULT ARGUMENT*****

#include <iostream>
using namespace std;

int geo(int, int=1, int=1);

int main()
{

    int l, b, h, r;
    l = 2;
    b = 1;
    h = 3;
    r = 2;

    cout << "AREA OF RECTANGLE IS: " << geo(l, b) << endl;
    cout << "AREA OF CIRCLE IS " << geo(r,r) << endl;
    cout << "VOLUME OF CUBE IS " << geo(l, b, h) << endl;

    return (0);
}

int geo(int m, int n, int p)
{
    return (m * n * p);
}