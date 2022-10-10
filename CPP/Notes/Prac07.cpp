//** CLASS MEMBER FUNCTION
//** 20.02.21

#include <iostream>
#include <math.h>
using namespace std;

class sq_root
{
private:
    int a;

public:
    void setdata(int x)
    {

        if (x < 0)
        {
            x = -x;
        }
        a = x;
    }

    void showdata()
    {
        cout << "THE SQUAREROOT OF " << a << " IS " << sqrt(a) << "." << endl;
    }
};

int main()
{
    sq_root num;
    int p;

    cout << "ENTER VALUE OF P:" << endl;
    cin >> p;

    num.setdata(p);
    num.showdata();

    return (0);
}