/* INITIALIZERS */

#include <iostream>

class data
{
    std::string name;
    int roll;
    int marks;

public:
    data(std::string s, int r, int m) : name(s), roll(r), marks(m) {}
    void show();
};

void data::show()
{
    std::cout << "NAME: " << name << '\n'
              << "ROLL NUMBER: " << roll << '\n'
              << "MARKS: " << marks << '\n';
}

int main()
{
    data stud("Ankit Raj", 01, 99);
    stud.show();
}