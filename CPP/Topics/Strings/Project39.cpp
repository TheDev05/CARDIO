//**C program to read time in string format and extract hours, minutes and second also check time validity

#include <iostream>
int validate(int, int, int);

int main()
{
    char str[20];

    std::cout << "ENTER YOUR TIME IN THIS FORMAT, HOUR:MIN:SEC " << std::endl;
    std::cin.getline(str, 20);

    int hour, min, sec;

    sscanf(str, "%d:%d:%d", &hour, &min, &sec);

    (validate(hour, min, sec));


    return (0);
}

int validate(int hour, int min, int sec)
{
    if ((hour > 24) || (min > 60) || (sec > 60))
    {
        std::cout << "TIME IS NOT VALIDATE" << std::endl;
        return (1);
    }

    std::cout << "ENTERED TIME IS: " << std::endl
              << hour << ":" << min << ":" << sec << std::endl;

    return (0);
}