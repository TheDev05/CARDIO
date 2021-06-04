/* An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly steps, for every step it was noted if it was an uphill,U, or a downhill, D step. Hikes always start and end at sea level, and each step up or down represents a  unit change in altitude. We define the following terms:
A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.

https://www.hackerrank.com/challenges/counting-valleys/problem?h_r=next-challenge&h_v=zen */

#include <iostream>

int main()
{
    int count;
    std::cout << "ENTER NIMBER OF STEPS: " << std::endl;
    std::cin >> count;

    char str[count + 5];
    int res[count + 5] = {'0'};

    // fflush(stdin); //!! IMPORTANT: fflush() may work with vs code but doesnot work with every compiler..use std::cin>>std::ws;
    // std::cin >> std::ws;
    std::cin.ignore();

    std::cout << "ENTER UP-STEP, DOWN-STEP NOTATIONS: " << std::endl;
    std::cin.getline(str, count + 5);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'U')
        {
            res[i] = 1;
        }

        else
            res[i] = -1;
    }

    int down = 0;
    int index = 0;
    int sum = 0;

    for (int j = 0; str[j] != '\0'; j++)
    {

        sum += res[j];

        if (sum == 0)
        {

            if (str[index] == 'D')
            {
                down++;
            }

            index = j + 1;
        }
    }

    std::cout << "TOTAL VALLEYS TRAVELLED: " << down;
    return (0);
}
