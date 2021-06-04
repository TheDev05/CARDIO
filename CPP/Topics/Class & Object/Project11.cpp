//** C++ Program to Compare Two Strings using overloading of compare operator

#include <iostream>
#include <string.h>

using namespace std;

class data
{
private:
    char name[10];

public:
    void setdata()
    {
        cout << "ENTER NAME: " << endl;
        cin >> name;
    }
    int operator==(data p)
    {
        int key;
        key = strcmp(name, p.name);

        if (key == 0)
        {

            return (1);
        }
        else
        {

            return (0);
        }
    }
};

int main()
{
    data obj1, obj2;
    obj1.setdata();
    obj2.setdata();

    if (obj1 == obj2)
    {
        cout << "BOTH STRING ARE SAME" << endl;
    }
    else
        cout << "BOTH STRINGS ARE NOT EQUAL" << endl;
    return (0);
}