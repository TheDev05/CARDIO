#include <stdio.h>
int main()
{
    char text[20];
    int data[20] = {'0'};

    printf("ENTER YOUR STRING:\n");
    fgets(text, 20, stdin);

    int count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        int key = 1;
        for (int j = i + 1; text[j] != '\0'; j++)
        {
            if (text[i] == text[j] && data[i] != -1)
            {
                key++;
                data[j] = -1;
            }
        }

        if (text[i] == ' ')
        {
            data[i] = -1;
        }

        if (data[i] != -1)
        {
            data[i] = key;
        }
        count++;
    }

    int max1 = data[0];
    int index1 = 0;
    int temp = 0;

    for (int i = 0; i < count; i++)
    {
        if (max1 < data[i])
        {
            max1 = data[i];
            index1 = i;
            temp++;
        }
    }

    int index2;
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        if (max1 == data[i])
        {
            index2 = i;
            total++;
        }
    }

    if (max1 == 1)
    {
        printf("ALL OCCURED EQUAL TIMES\n");
    }
    else if (total != 0)
    {
        printf("HIGHEST OCCURENCE: %d TIMES\n", max1);
        printf("TOTAL NUMBER WITH EQUAL HIGHEST OCCURENCE: %d", total);
        printf("TWO OF THEM ARE: %c AND %c", text[index1], text[index2]);
    }
    else
        printf("%c OCCURED HIGHEST WITH OCCURENCE OF: %d", text[index1], max1);

    return (0);
}