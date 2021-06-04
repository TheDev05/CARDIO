/*This is a staircase of size :

   #
  ##
 ###
####

Its base and height are both equal to n. It is drawn using # symbols and spaces. The last line is not preceded by any spaces.
Write a program that prints a staircase of size n.

visit: https://www.hackerrank.com/challenges/staircase/problem  */

#include <iostream>

int main()
{
    int count;
    std::cout<<"ENTER THE VALUE OF N: "<<std::endl;
    std::cin >> count;

    char input = '#';

    for (int i = 1; i <= count; i++)
    {
        int p=0;

        while (p<count-i)
        {
            std::cout << " ";
            p++;
        }

        for (int j = 1; j < i + 1; j++)
        {

            std::cout << input;
        }

        std::cout << std::endl;
    }

    return(0);
}
