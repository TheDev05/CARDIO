//**C++ Program for Inheritance Beyond Single Level

#include <iostream>

class univ
{
    int roll;

public:
    void read(int x)
    {
        roll = x;
    }
    void write()
    {
        std::cout << "ROLL_NO: " << '\n';
    }
};

class stream : public univ
{
    std::string course;

public:
    void get_course(std::string s)
    {
        course = s;
    }
    void show_course()
    {
        std::cout << "COURSE: " << course << '\n';
    }
};

class students : public stream
{
    std::string name;

public:
    void fill_name(std::string s)
    {
        name = s;
    }

    void show_name()
    {
        std::cout << "NAME: " << name << '\n';
    }
};

int main()
{
    students stud;

    stud.read(45);
    stud.fill_name("ANKIT RAJ");
    stud.get_course("CsE");

    stud.show_name();
    stud.write();
    stud.show_course();

    return (0);
}