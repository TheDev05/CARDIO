//*STATIC FUNCTION**

#include <iostream>

class data
{
private:
    static int age;

public:
    static void read()
    {
        int age_user;

        std::cout << "ENTER YOUR AGE: " << std::endl;
        std::cin >> age_user;

        age = age_user;
    }

    static void write()
    {
        std::cout << "ENTERED AGE: " << age << std::endl;
    }
};

int data::age;

int main()
{
    data::read();
    data::write();

    return (0);
}