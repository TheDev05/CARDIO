//*****LARGEST OF THREE NUMBERS USING USERS'S INPUT*****
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers one by one\n");
    scanf("%d %d %d",&a, &b, &c );

    if((a>b)&&(a>c))
    printf("%d is the largest among given three numbers\n", a );
    else
    
        if((b>a)&&(b>c))
        printf("%d is the largest among given three numbers\n", b);
        else
        printf("%d is the largest among given three numbers\n", c);
return 0;

}