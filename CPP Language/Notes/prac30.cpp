// ** FRIEND FUNCTION ACCESSING DATA MEMEBERS OF DIFF CLASS AT A TIME **

#include <iostream>
using namespace std;
class domain;

class data
{
private:
    int a;
    friend data add(data, domain);

public:
    data(int x = 0)
    {
        a = x;
    }

    void showdata()
    {
        cout << "a: " << a << endl;
    }
};

class domain
{
private:
    int a;
    friend data add(data, domain);

public:
    domain(int x)
    {
        a = x;
    }
};

data add(data m, domain n)
{
    data temp;
    temp.a = m.a + n.a;
    return (temp);
}

int main()
{
    data obj1(5), obj2;
    domain obj3(2) ;

    obj2 = add(obj1, obj3);
    obj2.showdata();
    return (0);
}