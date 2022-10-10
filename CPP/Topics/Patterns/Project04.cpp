/*C program to print following Pyramid:
        *
       * *
      * * *
     * * * *
    * * * * *
*/

#include <iostream>

int main()
{
    char input[10] = "*****";
    char blank[5] = "    ";

    int key = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0) //? only first tym blanks are printed
            {
                for (int k = 0; k < key; k++)
                {
                    std::cout << blank[k];
                }
            }

            std::cout << input[j] << " ";
        }

        std::cout << std::endl;
        key--;
    }
}

// #include <iostream>
// int main()
// {
//     char input[10] = "*****";
//     int blank = 4;

//     for (int i = 0; i < 5; i++)
//     {
//         for (int k = 0; k < blank; k++)
//         {
//             std::cout << " ";
//         }
//         blank--;

//         for (int j = 0; j < i + 1; j++)
//         {
//             std::cout << input[j] << " ";
//         }

//         std::cout << std::endl;
//     }
// }