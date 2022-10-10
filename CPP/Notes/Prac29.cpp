//** FRIEND FUNCTION CONCEPT**

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;
    friend data add(data, data);

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a: " << a << "b " << b << endl;
    }
};

data add(data p, data q)
{
    data temp;
    temp.a = p.a + q.a;
    temp.b = p.b + q.b;
    return (temp);
}

int main()
{
    data obj1, obj2, obj3;

    obj1.setdata(3, 4);
    obj2.setdata(2, 5);

    obj3 = add(obj1, obj2);
   

    obj3.showdata();

    return (0);
}
