//**BUBBLE SORTING**

// #include <stdio.h>

// void swap(int *p1, int *p2)
// {
//     int temp;
//     temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// void sort(int *p, int count)
// {
//     for (int i = 0; i < count - 1; i++)
//     {
//         for (int j = 0; j < count - 1 - i; j++) //? with every i the count of elements get dec bcoz one elemnst at ecah tym get sorted
//         {
//             if (*(p + j) > *(p + j + 1))
//             {
//                 swap(p + j, p + j + 1);
//             }
//         }
//     }
// }

// int main()
// {
//     int num[10];
//     int count;

//     printf("ENTER INPUT COUNT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBES:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     sort(num, count);

//     printf("OUTPUT AFTER SORTING:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d ", num[i]);
//     }

//     return (0);
// }

