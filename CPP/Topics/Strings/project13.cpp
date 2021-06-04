//** C program to convert string in upper case and lower case.
//** WITHOUT CCTYPE

#include <iostream>

int main()
{
    char str[20];
    int upper;
    int lower;

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)
    {
        upper = 65;
        lower = 97;
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            for (int k = 65; k <= 90; k++)//** THIS CAN ALOS DONE JUST BY ADDING str[i]=str[i]+32. 
            {
                if (str[i] == k)
                {
                    str[i] = (char)lower;
                }
                lower++;
            }
        }

        else
        {

            for (int j = 97; j <= 122; j++)//** THIS CAN ALOS DONE JUST BY SUBTACTING str[i]=str[i]-32. 
            {

                if ((int)str[i] == j)
                {
                    str[i] = (char)upper;
                }
                upper++;
            }
        }
       
    }

    std::cout << "OUTPUT STRING: " << str;
    return (0);
}