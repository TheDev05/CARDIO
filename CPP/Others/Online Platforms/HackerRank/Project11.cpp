/*Sam is a professor at the university and likes to round each student's grade according to these rules:

If the difference between the grade and the next multiple of 5 is less than 3, round  up to the next multiple of 5.
If the value of grade is less than38, no rounding occurs as the result will still be a failing grade.

https://www.hackerrank.com/challenges/grading/problem */

//TODO: RIVISON NEEDED

// #include <iostream>
// int main()
// {
//     int count;
//     std::cout << "ENTER NUMBER OF STUDNTS: " << std::endl;
//     std::cin >> count;

//     int grades[count];
//     std::cout << "ENTER GRADES OF STUDENT: " << std::endl;

//     for (int i = 0; i < count; i++)
//     {
//         std::cin >> grades[i];
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (grades[i] >= 38)
//         {
//             int lastDig = grades[i] % 10;

//             if (lastDig >= 1 && lastDig <= 5)
//             {
//                 if (lastDig >= 3)
//                 {

//                     std::cout << grades[i] + (5 - lastDig) << std::endl;
//                 }
//                 else
//                     std::cout << grades[i] << std::endl;
//             }

//             else
//             {
//                 if (lastDig >= 8)
//                 {

//                     std::cout << grades[i] + (10 - lastDig) << std::endl;
//                 }
//                 else
//                     std::cout << grades[i] << std::endl;
//             }
//         }

//         else
//             std::cout << grades[i] << std::endl;
//     }

//     return (0);
// }

//? RIVISON 01 | 22.04.21

#include <iostream>
int main()
{
    int count;

    std::cout << "ENTER NUMBER OF TOTAL STUDENTS: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER GRADES OF STUDENT: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < count; i++)
    {
        if (num[i] >= 38)
        {
            int rem = num[i] % 10;

            if (rem >= 3 && rem <= 5)

                std::cout << num[i] + (5 - rem) << " ";

            else
            {
                if (rem >= 7 && rem < 10)

                    std::cout << num[i] + (10 - rem) << " ";

                else
                    std::cout << num[i] << " ";
            }
        }

        else
            std::cout << num[i] << " ";
    }

    return (0);
}