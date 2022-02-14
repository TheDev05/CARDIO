//** DEFAULT ARGUMENT/ FUNCTION OVERLOADING
//** 20.03.21

#include <iostream>
using namespace std;

inline int area(int, int);
inline int area(int);

int main()
{
    int length, breadth, side;
    int ar_rec, ar_sqr;

    cout << "ENTER VALUE OF LENGTH THEN BREADTH OF RECTANGLE:" << endl;
    cin >> length >> breadth;

    cout << "ENTER SIDE OF SQUARE:" << endl;
    cin >> side;

    ar_rec = area(length, breadth);
    ar_sqr = area(side);

    cout << "THE AREA OF RECTANGLE AND SQURAE IS:" << ar_rec << " AND " << ar_sqr;
    return (0);
}

int area(int x, int y)
{
    return (x * y);
}

int area(int p)
{
    return (p * p);
}