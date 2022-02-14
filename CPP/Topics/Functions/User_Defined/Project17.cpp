//**C - User define function example with arguments and no return type.

#include <iostream>

void welcome_mssg()
{
    std::cout << "WELCOME!, I HOPE YOU LIKE THE JOURNEY " << std::endl;
}

void bye_mssg()
{
    std::cout << "THANK YOU!, FOR VISITING. " << std::endl;
}

int main()
{
    welcome_mssg();

    std::cout << "YOU ARE IN THE WORLD OF NOOB_CODERS" << std::endl;

    bye_mssg();
}