//C Program To Delete Element From Array At Desired Or Specific Position
//******REVISE*******

#include <stdio.h>

int main()
{
    int array[20], count, pos, num;

    printf("ENTER YOUR INPUT COUNT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("ENTER THE POSITION YOU WANT TO DELETE:\n");
    scanf("%d", &pos);

    num = pos - 1;
    while (num < count)
    {
        array[num] = array[num + 1];
        num++;
    }

    count--;
    printf("YOU NUMBER AFTER DELETION IS:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d", array[i]);
    }

    return (0);
}
