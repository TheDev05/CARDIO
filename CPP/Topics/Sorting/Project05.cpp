//**C++ Program To Find The Union And Intersection Of Two Sorted Array(unsorted given by user) In Increasing Order.
//** WE CN ALSO USE  A FUNCTION FOR REMOVING SIMILAR ELEMNSTS IN UNION AND INTERSECTION.
//** WITHOUT BINARY SEARCH CONCEPT.

void bubble_sort(int *, int);
void swap(int *, int *);
int *array_union(int *, int *, int, int);
int *array_intersection(int *, int *, int, int, int *);

#include <iostream>

int main()
{
    int num1[20], num2[20], count1, count2, count3 = 0;
    int *u, *inter;

    std::cout
        << "ENTER FIRST ARRAY INPUT LIMIT: " << std::endl;
    std::cin >> count1;

    std::cout << "ENTER SECOND ARRAY INPUT LIMIT: " << std::endl;
    std::cin >> count2;

    std::cout << "ENTER FIRST ARRAY: " << std::endl;
    for (int i = 0; i < count1; i++)
    {
        std::cin >> num1[i];
    }

    std::cout << "ENTER SECOND ARRAY ELEMENT: " << std::endl;
    for (int i = 0; i < count2; i++)
    {
        std::cin >> num2[i];
    }

    bubble_sort(num1, count1);
    bubble_sort(num2, count2);

    u = array_union(num1, num2, count1, count2);
    inter = array_intersection(num1, num2, count1, count2, &count3);

    std::cout << "UNION: " << std::endl;
    for (int i = 0; i < count1 + count2; i++)
    {
        std::cout << *(u + i) << " ";
    }

    std::cout << std::endl;
    std::cout << "INTERSECTION: " << std::endl;
    for (int i = 0; i < count3; i++)
    {
        if (*(inter + i) != -1)
        {
            std::cout << *(inter + i) << " ";
        }
    }

    return (0);
}

void bubble_sort(int *p, int count)
{
    int temp;
    for (int i = 0; i < count - 1; i++)
    {
        temp = 0;
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                temp++;
                swap((p + j), (p + j + 1));
            }
        }
        if (temp == 0)
        {
            break;
        }
    }
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int *array_union(int *p1, int *p2, int count1, int count2)
{
    static int uni[50];
    int j;

    for (int i = 0; i < count1; i++)
    {
        uni[i] = *(p1 + i);
    }

    j = count1;
    for (int i = 0; i < count2; i++)
    {
        uni[j] = *(p2 + i);
        j++;
    }
    bubble_sort(uni, (count1 + count2));
    return (uni);
}

int *array_intersection(int *p1, int *p2, int count1, int count2, int *count3)
{
    static int inter[50];
    int index = 0;

    for (int i = 0; i < count1; i++)
    {

        for (int j = 0; j < count2; j++)
        {

            if (*(p1 + i) == *(p2 + j))
            {
                inter[index] = *(p1 + i);
                index++;
            }
        }
    }

    bubble_sort(inter, index);
    *count3 = index;

    return (inter);
}