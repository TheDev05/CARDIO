/* You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).
The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

https://www.hackerrank.com/challenges/kangaroo/problem
*/

// TODO: RIVISON NEEDED..IMPORTANT

// #include <iostream>
// int main()
// {
//     int x1, v1, x2, v2;

//     std::cout << "ENTER FIRST STARTING POS THEN ITS SPEED:" << std::endl;
//     std::cin >> x1 >> v1;

//     std::cout << "ENTER SECOND STARTING POS THEN ITS SPEED:" << std::endl;
//     std::cin >> x2 >> v2;

//     int max, min;

//     if (v1 > v2)
//     {
//         max = x1;
//         min = x2;
//     }
//     else
//     {
//         if (v1 < v2)
//         {
//             max = x2;
//             min = x1;
//         }
//         else
//         {
//             if (x1 == x2)
//             {
//                 std::cout << "YES";
//                 return (0);
//             }
//         }
//     }

//     while ((x1 != x2) && (min >= max))
//     {

//         if (max == x1)
//         {
//             max = max + v1;
//             min = min + v2;
//         }
//         else
//         {
//             max = max + v2;
//             min = min + v1;
//         }

//         x1 = x1 + v1;
//         x2 = x2 + v2;
//     }

//     if (max == min)
//     {
//         std::cout << "YES";
//     }

//     else
//         std::cout << "NO";

//     return (0);
// }

#include <iostream>
#include <cmath>

int main()
{
    int n1, v1, n2, v2;
    std::cout << "ENTER POS THEN SPPED OF FIRST KANGAROO: " << std::endl;
    std::cin >> n1 >> v1;

    std::cout << "ENTER POS THEN SPEED OF SECOND KANGAROO: " << std::endl;
    std::cin >> n2 >> v2;

    int n = (n2 - n1);
    int v = (v1 - v2);

    if (((n < 0 && v < 0) || (n > 0 && v > 0)) && (((float)n / v) == ceil((float)n / v)))
    {
        std::cout << "YES";
    }

    else
        std::cout << "NO";

    return (0);
}

