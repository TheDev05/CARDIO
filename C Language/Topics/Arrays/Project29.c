//**Sort even and odd elements of the array separately.

#include <stdio.h>
void split_elem(int *, int);
void insertion_sort(int *, int);

int main()
{
    int num[20], count;

    printf("ENTER ARRAY LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER ARRAY INPUTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    split_elem(num, count);

    return (0);
}

void split_elem(int *p, int count)
{
    int even_array[20], odd_array[20];
    int index_odd = 0, index_even = 0;

    for (int i = 0; i < count; i++)
    {
        if (*(p + i) % 2 == 0)
        {
            even_array[index_even] = *(p + i);
            index_even++;
        }
        else
        {
            odd_array[index_odd] = *(p + i);
            index_odd++;
        }
    }

    insertion_sort(even_array, index_even);
    insertion_sort(odd_array, index_odd);

    printf("EVEN SORTED ARRAY:\n");
    for (int i = 0; i < index_even; i++)
    {
        printf("%d ", even_array[i]);
    }

    printf("\nODD SORTED ARRAY:\n");
    for (int i = 0; i < index_odd; i++)
    {
        printf("%d ", odd_array[i]);
    }
}

void insertion_sort(int *p, int count)
{
    int temp;
    for (int i = 0; i < count; i++)
    {
        int j = i - 1;
        temp = *(p + i);

        while (*(p + j) > temp && j >= 0)
        {
            *(p + j + 1) = *(p + j);
            j--;
        }

        *(p + j + 1) = temp;
    }
}