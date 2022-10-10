//**C++ Program to show Constructor & Destructor Example

#include <iostream>
using namespace std;

class data
{

public:
    int r;

    data(int a = 0)
    {
        r = a;
    }
    ~data()
    {
        cout << "DESTRUCTOR RUN HERE" << endl;
    }
};
data area(data);

int main()
{
    data obj1(4), ar;

    ar = area(obj1);
    cout << "AREA OF CIRCLE IS: " << ar.r << endl;
    return (0);
}

data area(data obj1)
{
    data temp;
    temp.r = obj1.r * obj1.r;
    return (temp);
}
