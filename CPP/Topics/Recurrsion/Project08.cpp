//** Find reverse of any number using recursion.

//**WITHOUT RECURSION**

// #include <iostream>
// int main()
// {
//     int num;

//     std::cout << "ENTER YOUR NUMBER: " << std::endl;
//     std::cin >> num;

//     int rem;
//     int sum = 0;
//     for (int i = 0; num != 0; i++)
//     {
//         rem = num % 10;
//         sum = sum * 10 + rem * 1;
//         num = num / 10;
//     }

//     std::cout << sum;
//     return (0);
// }

//**WITH RECURSION**
//**! NOT COMPLETE **

#include <iostream>

int reverse(int num)
{
    int rem;
    static int sum;

    if (num == 0)
    {
        return (0);
    }

    else
    {
        rem = num % 10;
        sum = sum * 10 + rem * 1;
        reverse(num / 10);
    }
    return (sum);

    else return (num % 10 * (int))
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    std::cout << "REVERES OF " << num << " IS: " << reverse(num);
    return (0);
}