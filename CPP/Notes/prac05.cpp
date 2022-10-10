//** INLINE CONCEPT
//** 20.03.21

#include <iostream>
using namespace std;
inline int add(int, int);

int main()
{
    int a, b, sum;

    cout << "ENTER VALUE OF A AND B:" << endl;
    cin >> a >> b;

    sum = add(a, b);
    cout << "SUM OF " << a << " AND " << b << " IS " << sum << endl;
    return (0);
}

int add(int x, int y)
{
    int sum;
    sum = x + y;
    return (sum);
}