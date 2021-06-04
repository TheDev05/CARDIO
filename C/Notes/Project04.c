//*****CHEKING A UNKNOWN FIGURE IS IT TRAINGLE OR NOT AND IF IT IS TRAINGLE THEN WHICH TYPE OF TRAINGLE IS THIS? (WITH THE HELP OF USER)*******

#include <stdio.h>
int main()
{
  int side, option, a, b, c;

  printf("Enter the side of that figure:\n");
  scanf("%d", &side);

  if (side == 3)
  {
    printf("FIGURE IS TRAINGLE:\n");
    printf("WANNA CHECK WHICH TRAILE IS THIS:\n\nPRESS 1 FOR YES AND 0 FOR NO\n");
    scanf("%d", &option);

    if (option == 1)
    {
      printf("NOW, ENTER THE LENGHTH OF IT SIDES, FIRST A THEN B THEN C:\n");
      scanf("%d %d %d", &a, &b, &c);

      if (a == b && a == c)
      {
        printf("TRAINGLE IS EQUILETRAL TRAINGLR:\n");
      }

      else if (a == b || a == c || b == c)
      {
        printf("TRAINGLE IS ISOCELEUS TRAINGLE:\n");
      }

      else
      {
        printf("TRAINGLE IS SCALENE TRAINGLE:\n");
      }

      if (option == 0)
      {
        return 0;
      }
    }
  }
  else
  {
    printf("FIGURE IS NOT A TRAIGLE:\n");
  }

  return 0;
}