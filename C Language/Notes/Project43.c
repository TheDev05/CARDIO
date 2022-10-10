// //**SELECTION SORTING**

// #include <stdio.h>

// void swap(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// int *get_least(int *p, int i, int count)
// {
//     int temp = *(p + i), key = 0;
//     int *index;
//     // int *index = (p + i);

//     for (i; i < count; i++)
//     {

//         if (temp > *(p + i))
//         {
//             temp = *(p + i);
//             index = (p + i);
//             key++;
//         }
//     }

//     //     if (key == 0)
//     // {
//     //     return (p + i);
//     // }

//     return (index);
// }

// void sel_sort(int *p, int count)
// {
//     for (int i = 0; i < count - 1; i++)
//     {
//         swap((p + i), get_least(p, i, count));
//     }
// }

// int main()
// {
//     int num[10], count;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     sel_sort(num, count);

//     printf("OUTPUT AFTER SORTING:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d ", num[i]);
//     }

//     return (0);
// }

#include <stdio.h>

void sel_sort(int *, int);
int *find_least(int, int *, int);
void swap(int *, int *);

int main()
{
    int num[20], count;

    printf("ENTER COUNT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    sel_sort(num, count);

    printf("OUTPUT:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }

    return (0);
}

void sel_sort(int *p, int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        swap((p + i), find_least(i, p, count));
    }
}

int *find_least(int i, int *p, int count)
{
    int temp = *(p + i);
    int *index = (p + i);

    for (i; i < count; i++)
    {
        if (temp > *(p + i))
        {
            temp = *(p + i);
            index = (p + i);
        }
    }

    return (index);
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}