//**C program to reverse string in same variable, without using another string variable to reverse.
//**WITHOUT USING REVERSE CONDITION AND ANOTHER CHARACTER ARRAY..ACTUALLY WE ARE GOIN TO DO SWAPPING

#include <iostream>
void swap(char *);
int count(char *);

int main()
{
    char str[20];

    std::cout << "ENTER STRING: " << std::endl;
    std::cin.getline(str, 20);

    swap(str);

    std::cout << "AFTER REVERSE: " << str << std::endl;
    return (0);
}

void swap(char *p)
{
    char temp;
    int iteration = count(p);

    for (int i = 0; i < iteration * 0.5; i++)
    {

        temp = *(p + i);
        *(p + i) = *(p + (iteration - 1) - i);
        *(p + (iteration - 1) - i) = temp;
    }
}

int count(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
        ;
    return (i);
}