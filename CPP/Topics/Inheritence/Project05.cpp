//**C++ Program to demonstrate an Example of Hybrid Inheritance

#include <iostream>

class univ
{
    std::string design;

public:
    void set_design(std::string s)
    {
        design = s;
    }

    void show_design()
    {
        std::cout << "DESIGNATION: " << design << '\n';
    }
};

class student : public univ
{
    std::string name;
    int roll;

public:
    void set_name(std::string n)
    {
        name = n;
    }
    void set_roll(int x)
    {
        roll = x;
    }

    void show_name()
    {
        std::cout << "NAME: " << name << '\n';
    }
    void show_roll()
    {
        std::cout << "ROLL: " << roll << '\n';
    }
};

class faculty : public univ
{
    std::string faculty_name;
    int id;

public:
    void set_fname(std::string n)
    {
        faculty_name = n;
    }
    void set_fid(int x)
    {
        id = x;
    }

    void show_fname()
    {
        std::cout << "FACULTY NAME: " << faculty_name << '\n';
    }
    void show_fid()
    {
        std::cout << "FACULTY ID: " << id << '\n';
    }
};

int main()
{
    student stud;
    faculty fac;

    stud.set_design("STUDENT");
    stud.set_name("ANKIT RAJ");
    stud.set_roll(12);

    fac.set_design("FACULTY");
    fac.set_fname("RAJU KUMAR");
    fac.set_fid(1234);

    std::cout << "**************************************************************************" << '\n';
    stud.show_name();
    stud.show_design();
    stud.show_roll();

    std::cout << "**************************************************************************" << '\n';
    fac.show_fname();
    fac.show_design();
    fac.show_fid();

    return (0);
}