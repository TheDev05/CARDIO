//**C++ Program To Find Whether A Number Is Palindrome Or Not

#include <iostream>

int main()
{
    int num, count;

    std::cout << "ENTER DIGIT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER " << count << " DIGIT NUMBER: " << std::endl;
    std::cin >> num;

    int rem, res[count], res_num = num;

    for (int i = 0; num != 0; i++)
    {
        rem = num % 10;
        res[i] = rem;

        num = num / 10;
    }
    num = res_num;
    int key = 1;

    for (int i = 0; i < count / 2; i++)
    {
        if (res[i] == res[count - 1])
        {
            key++;
            
        }
    }
    if (key == count / 2)
    {
        std::cout << num << " IS PALINDROME" << std::endl;
    }

    else
        std::cout << res_num << " IS NOT PALINDROME." << std::endl;

    return (0);
}