//*CLASS CONCEPT*

#include <iostream>
#include <cstring>

class data
{
private:
    int roll;
    char name[20];
    int marks;

public:
    void set_roll(int x)
    {
        roll = x;
    }

    void set_marks(int x)
    {
        marks = x;
    }

    void set_name(char *x)
    {
        strcpy(name, x);
    }

    void show_roll()
    {
        std::cout << "ROLL: " << roll << std::endl;
    }

    void show_marks()
    {
        std::cout << "MARKS: " << marks << std::endl;
    }

    void show_name()
    {
        std::cout << "NAME: " << name << std::endl;
    }
};

int main()
{
    data obj1;
    char name[20] = "ankit";

    obj1.set_name(name);
    obj1.set_roll(01);
    obj1.set_marks(100);

    obj1.show_name();
    obj1.show_roll();
    obj1.show_marks();

    return (0);
}