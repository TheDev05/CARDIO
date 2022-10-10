//**C++ Program to Sort Elements in Lexicographical Order (Dictionary Order) Using For Loop
//**WE CAN ALSO CREATE A FUNCTION FOR REMOVING DUPLICS:

// #include <iostream>
// #include <cstring>

// void bubble_sort(char *, int);
// void swap(char *, char *);

// int main()
// {
//     char sen[20];
//     int count;

//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(sen, 20);

//     count = strlen(sen);

//     bubble_sort(sen, count);

//     std::cout << "STRING AFTER SORTING: " << sen << std::endl;

//     return (0);
// }

// void bubble_sort(char *p, int count)
// {
//     int temp;
//     for (int i = 0; i < count - 1; i++)
//     {
//         temp = 0;
//         for (int j = 0; j < count - 1 - i; j++)
//         {
//             if ((int)*(p + j) > (int)*(p + j + 1)) //*ISTEAD USING ASCII VALUES WE CAN ALSO USE *(p+j)>'A' etc manipulations.
//             {
//                 temp++;
//                 swap((p + j), (p + j + 1));
//             }
//         }
//         if (temp == 0)
//         {
//             break;
//         }
//     }
// }

// void swap(char *p1, char *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

//*******************************************************************************************************************************************
#include <iostream>

int len(char *);
void bubble_sort(char *);
void swap(char *, char *);

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    bubble_sort(str);

    std::cout << "AFTER SORTING STRING IS: " << str << std::endl;
    return (0);
}

int len(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }

    return (i);
}

void bubble_sort(char *p)
{
    int key = 0;
    int count = len(p);

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                swap((p + j), (p + j + 1));
                key++;
            }
        }
        if (key == 0)
        {
            break;
        }
    }
}

void swap(char *p1, char *p2)
{
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}