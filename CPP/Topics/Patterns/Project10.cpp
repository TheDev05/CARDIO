/*C program to print following Pyramid:
        1
       123 
      12345
     1234567 
    123456789
*/

#include <iostream>

int main()
{
    char input[] = "123456789";

    int count = 1; //with each row we inc count value by 2.
    int p, res_p = 3; //for blanks before numbers..p get decremented with iteration so we reserve its value 

    for (int i = 0; i < 5; i++)
    {
        p = res_p; //assigning value to p from its reserved value of what balnk to be printed

        while (p >= 0 && i != 4)//printing blanks before numbers
        {
            std::cout << " ";
            p--;
        }

        for (int j = 0; j < count; j++) //printing numbers
        {
            std::cout << input[j];
        }

        count = count + 2; //incresing count value for next row by 2
        res_p--;//decresing blank before number by 1
        
        std::cout << std::endl;
    }

    return (0);
}