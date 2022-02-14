//** C++ Program to demonstrate an Example of Multiple Inheritance

#include <iostream>

class student
{
    int roll_no;
    int standard;

public:
    void read_roll(int x)
    {
        roll_no = x;
    }

    void show_roll()
    {
        std::cout << "ROLL_NO: " << roll_no << '\n';
    }

    void read_class(int c)
    {
        standard = c;
    }

    void show_class()
    {
        std::cout << "Standard: " << standard << '\n';
    }
};

class player
{
    int reg_id;
    std::string game;

public:
    void read_reg(int y)
    {
        reg_id = y;
    }

    void show_reg()
    {
        std::cout << "REGISTRATION_ID: " << reg_id << '\n';
    }

    void read_game(std::string g)
    {
        game = g;
    }

    void show_game()
    {
        std::cout << "Game: " << game << '\n';
    }
};

class boy : public student, public player
{
    std::string name;
    int age;

public:
    void read_name(std::string n)
    {
        name = n;
    }

    void show_name()
    {
        std::cout << "NAME: " << name << '\n';
    }
    void read_age(int q)
    {
        age = q;
    }
    void show_age()
    {
        std::cout << "AGE: " << age << '\n';
    }
};

int main()
{
    boy obj;

    obj.read_name("ANKIT RAJ");
    obj.read_age(18);

    obj.read_class(12);
    obj.read_roll(12);

    obj.read_reg(4567);
    obj.read_game("Golf");

    obj.show_name();
    obj.show_age();

    obj.show_roll();
    obj.show_class();

    obj.show_reg();
    obj.show_game();

    return (0);
}