//** OPERATOR OVERLOADING WITH ADDITION OPERATOR **
//** 20.03.21

// #include <iostream>
// using namespace std;

// class data
// {
// private:
//     int a, b;

// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     // data add(data p)
//     data operator+(data p)
//     {
//         data temp;
//         temp.a = a + p.a;
//         temp.b = b + p.b;
//         return (temp);
//     }
//     void showdata()
//     {
//         cout << "a: " << a << endl
//              << "b: " << b << endl;
//     }
// };

// int main()
// {
//     data obj1, obj2, sum;
//     obj1.setdata(2, 4), obj2.setdata(1, 2);

//     sum = obj1 + obj2; //? **READ: OBJ1 IS CALLING +FUNCTION BY PASSING OBJ2.
//                        //? **SIMILAR TO: FOLLOWING COMMENTED LINE
//     //sum=obj1.add(obj2);

//     sum.showdata();
//     return (0);
// }

//*********************************************************************************************************************************************
//** OPERATOR OVERLOADING **
//** 20.03.21| RIVISON

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    data operator+(data p)
    {
        data temp;
        temp.a = a + p.a;
        temp.b = b + p.b;
        return (temp);
    }

    void showdata()
    {
        cout << "a: " << a << endl
             << "b: " << b << endl;
    }
};

int main()
{
    data obj1, obj2, sum;
    obj1.setdata(2, 4);
    obj2.setdata(3, 3);

    sum = obj1 + obj2;
    sum.showdata();
    return (0);
}
