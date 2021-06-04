//FINDING SUM OF INPUTTED NUMBERS USING ARRAY

#include <stdio.h>
int main()
{
    int number[5];
    int sum=0;

    printf("ENTER YOUR 5 NUMBERS:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&number[i]);
    }
    
for (int i = 0; i < 5; i++)
{
    sum+=number[i];
}
printf("THE SUM OF INPUTTED NUMBER IS %d\n", sum);
return 0;
}
