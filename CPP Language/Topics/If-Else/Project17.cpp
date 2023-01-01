//**If ,input is equal and graeter thean 1 and equal & less than 9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.

#include <iostream>

int main()
{
    int input;
    // char intial[10][20] = {{"greater than nine"}, {"one"}, {"two"}, {"three"}, {"four"}, {"five"}, {"six"}, {"seven"}, {"eight"}, {"nine"}};

    std::cout
        << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> input;

    // if (input >= 1 && input <= 9)
    // {
    //     for (int i = 0; i < 10; i++)
    //     {

    //         if (input == i)
    //         {
    //             std::cout << intial[i];
    //         }
    //     }
    // }

    // else
    //     std::cout << "greater then 9";

    switch (input)
    {
    case 1:
        std::cout << "one";
        break;
    case 2:
        std::cout << "two";
        break;
    case 3:
        std::cout << "three";
        break;
    case 4:
        std::cout << "four";
        break;
    case 5:
        std::cout << "five";
        break;
    case 6:
        std::cout << "six";
        break;

    case 7:
        std::cout << "seven";
        break;
    case 8:
        std::cout << "eight";
        break;
    case 9:
        std::cout << "nine";
    default:
        std::cout << "greater than 9";
        break;
    }

    return (0);
}
