// **PRE-POST INC OPERATOR OVERLOADING **

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    data(int X = 0, int Y = 0)
    {
        a = X;
        b = Y;
    }

    data operator++()
    {
        data temp; //? if u hace created cons for any one now here also cons is called..here a and b of temp get value 0.
        temp.a = a + 1;
        temp.b = b + 1;
        return (temp);
    }

    data operator++(int) //** we have to provide a int paremeter here..it makes compiler to distinguisgh easily between pre and post. 
    {
        data post; //? here also cons. is called
        post.a = a;
        post.b = b;
        a++;
        b++;
        return (post);
    }
    void showdata()
    {
        cout << "a " << a << " b " << b << endl;
    }
};

int main()
{
    data obj1(2, 4), obj(3, 5);

    obj1++;
    ++obj;

    obj.showdata();
    obj1.showdata();
    return (0);
}
