#include <stdio.h>
int main()
{
int a,b,c;
printf("enter a then b then c:",a,b,c);
scanf("%d %d %d", &a, &b, &c);
if(a>b)
if(a>c)
printf("largest no is %a\n", a);
else if(b>c)
printf("largest no is %d\n", b);

else printf("largest is %d\n", c);
return 0;
}