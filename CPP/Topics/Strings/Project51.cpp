//**C program to count digits, spaces, special characters, alphabets in a string.

#include <iostream>

int main()
{
    char str[20];
    int dig = 0, blank = 0, spec = 0, alpha = 0;

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' || str[i] >= 'A') && (str[i] <= 'z' || str[i] <= 'Z'))
        {
            alpha++;
        }

        else
        {
            if (str[i] == ' ')
            {
                blank++;
            }

            else
            {
                if (str[i] >= '1' && str[i] <= '9')//** IMPORTANT: 1 & 9 IS DENOTED AS CHAR BECAUSE USED FOR CHAR, INDIVIUALLY CHAR IS CHECK SO 
                                                  //**  HAVE LIMIT 1 TO 9 FOR DIGITS.
                {                                    
                    dig++;
                }

                else
                    spec++;
            }
        }
    }

    std::cout << "DIGITS: " << dig << std::endl
              << "ALPHA: " << alpha << std::endl
              << "BLANKS: " << blank << std::endl
              << "SPECAIL CHARS: " << spec << std::endl;
    return (0);
}