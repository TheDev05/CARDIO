//**C Program to reverse a number (not only print, not store in array but as a number)
// **(for exampleinput: n1=1234, n2=output: 4321).

#include <iostream>

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: \n";
    std::cin >> num;

    int rem;
    int sum = 0;
    for (int i = 0; num != 1; i++)
    {
        rem = num % 10;
        sum = (sum * 10) + (rem * 1); //*initially 0 at tens place and rem at ones place, after that rem+prev sum is at tens & next rem is at once;
                                      //*Revise                                                                                               C-Notes Last Pages
        num = num / 10;
    }

    std::cout << "REVERSD NUM IS: " << sum;

    return (0);
}