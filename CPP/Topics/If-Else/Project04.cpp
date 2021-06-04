//**C++ Program To Check Number Is Prime Or Not Using If/Else Statements

#include <iostream>
int main()
{
    int a;
    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> a;

    int key = 0;
    
    for (int i = 2; i <= 9; i++)
    {
        if (a % i == 0 && i != a)
        {
            key++;
            std::cout << a << " IS NOT A PRIME NUMBER" << std::endl;
        }
    }

    if (key == 0)
    {
        std::cout << a << " IS A PRIME NUMBER" << std::endl;
    }

    return (0);
}