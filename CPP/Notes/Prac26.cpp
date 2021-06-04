// ** DESTRUCTOR CONCPEPT **

#include <iostream>
using namespace std;

class data
{

public:
    int a, b;

    ~data()
    {
        cout << "DESTRUCTOR INITIATED" << endl;
    }

    data(int X = 0, int Y = 0)//? DEFAULT ARGUMENT CONCEPT
    {
        a = X;
        b = Y;
    }

    void showdata()
    {
        cout << "a: " << a << " b " << b << endl;
    }
};

data add(int);//? we have to declare here not at top bcoz at tp compiler cannt understant wht is data.
data obj1(4, 5), obj2; //? WE HAVE TO MAKE IT GLOBAL COZ WE ARE GOIN' TO USEE IN CALL FUNCTION

int main()
{

    int p = 10;
    obj2 = add(p);
    obj2.showdata();
    return (0);
}

data add(int q)
{
    data temp;
    temp.a = obj1.a + q;
    temp.b = obj1.b + q;
    return (temp);
}