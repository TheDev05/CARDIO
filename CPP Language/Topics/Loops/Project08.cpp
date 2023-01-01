//**For each integer greter than equal to 1 and less than equal to 9 between two given input by user :
// If 1>=n<=9 , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if n>9 and it is an even number, then print "even".
// Else if n>9 and it is an odd number, then print "odd".

#include <iostream>

int main()
{
    int input1, input2;
    char initial[10][20] = {{"greater than 9"}, {"one"}, {"two"}, {"three"}, {"four"}, {"five"}, {"six"}, {"seven"}, {"eight"}, {"nine"}};

    std::cout << "ENTER TWO INPUT: " << std::endl;
    std::cin >> input1 >> input2;

    for (int k = input1; k <= input2; k++)
    {
        if (k >= 1 && k <= 9)
        {
            for (int j = 0; j < 10; j++)
            {
                if (j == k)
                {
                    std::cout << initial[j] << std::endl;
                }
            }
        }

        else
        {
            if (k % 2 == 0)
            {
                std::cout << "even" << std::endl;
            }

            else
                std::cout << "odd" << std::endl;
        }
    }

    return (0);
}