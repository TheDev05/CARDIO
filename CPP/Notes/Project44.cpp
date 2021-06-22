//* Practice Inheritence:

#include <iostream>

class animal
{
    int legs;

public:
    void read_legs(int x)
    {
        legs = x;
    }

    virtual void show_horns()
    // void show_horns()
    {
        std::cout << "ANIMALS HAVE HORNS." << '\n';
    }

    void show_legs()
    {
        std::cout << "LEGS: " << legs << '\n';
    }
};

class dog : public animal
{
    std::string color;

public:
    void put_color(std::string s)
    {
        color = s;
    }

    void show_horns() // Overidden
    {
        std::cout << "DOGS HAVE NO HORNS." << '\n';
    }

    void show_color()
    {
        std::cout << "COLOR: " << color << '\n';
    }
};

int main()
{
    animal obj;
    dog obj2;

    obj2.put_color("red");
    obj2.show_color();

    obj2.read_legs(4);
    obj2.show_legs();

    obj2.show_horns();

    // animal *p;
    // p = &obj2;

    // p->show_horns(); //virtual fun() concept

    return (0);
}
