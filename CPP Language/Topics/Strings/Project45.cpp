//**C program to compare two string using case and ignoring case without using library function.
//**(without lib files)**
//** REVISON NEEDED

#include <iostream>

int strlen(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }

    return (i);
}

void toupper(char *p)
{
    if (*p >= 'a' && *p <= 'z')
    {
        *p = *p - 0x20;
    }
}

int strcmpI(char *p1, char *p2) //* FUNCATION IGNORE CASE OF CHARACTERS
{
    int count1 = strlen(p1);
    int count2 = strlen(p2);

    if (count1 != count2)
        return (1);

    int key = 0;
    char temp1, temp2;
    for (int i = 0; i < count1; i++)
    {
        temp1 = *(p1 + i);
        temp2 = *(p2 + i);

        toupper(&temp1);
        toupper(&temp2);

        if (temp1 == temp2)
        {
            key++;
        }
    }

    if (key == count1)
    {
        return (0);
    }

    else
        return (1);
}

int strcmp(char *p1, char *p2) //** FUNCTION THAT ALSO CONSIDER CASE IN THEIR COMPARISONS
{
    int count1 = strlen(p1);
    int count2 = strlen(p2);

    if (count1 != count2)
        return (1);

    int key = 0;
    for (int i = 0; i < count1; i++)
    {
        if (*(p1 + i) == *(p2 + i))
        {
            key++;
        }
    }

    if (key == count1)
    {
        return (0);
    }
    else
        return (1);
}

int main()
{
    char str1[20], str2[20];

    std::cout << "ENTER FIRST STRING: " << std::endl;
    std::cin.getline(str1, 20);

    std::cout << "ENTER SECOND STRING: " << std::endl;
    std::cin.getline(str2, 20);
    
    std::cout<<"****************************************************"<<std::endl;

    std::cout << "ORIGINAL STR1: " << str1 << std::endl;
    std::cout << "ORIGINAL STR2: " << str2 << std::endl;

    std::cout<<"****************************************************"<<std::endl;

    if (strcmp(str1, str2))
    {
        std::cout << "STRCMP: TWO STRINGS ARE NOT EQUAL." << std::endl;
    }
    else
        std::cout << "STRCMP: BOTH STRINGS ARE EQUAL." << std::endl;

    if (strcmpI(str1, str2))
    {
        std::cout << "STRCMP(I): TWO STRINGS ARE NOT EQUAL." << std::endl;
    }
    else
        std::cout << "STRCMP(I): BOTH STRINGS ARE EQUAL." << std::endl;

    return (0);
}