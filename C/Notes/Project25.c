//CHECKING 4 EXISTS ON NOT IN DATA OF USER INPUT OR IF EXISTS THEN AT WHICH PLACE, AND HOW MANY TIMES?
//THE NO 3 EXISTS OR NOT IF YES WHAT IS THE FIRST PLACE OF ITS EXISTENCE

#include <stdio.h>
int main()
{
  int input[5], exist, place;
  exist = 0;

  printf("ENTER 5 NUMBERS:\n");

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &input[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    if (input[i] == 4)
    {
      //   printf("THE NO 4 EXISTS AT %d", )
      exist++;
      place = i;
    }

    if (input[i] == 3)
    {
      place = i;
      printf("THE NO 3 EXISTS AT input[%d]\n", place);
    }
  }

  if (exist == 1)
  {
    printf("THE NUMBER 4 EXIST ONCE AND AT input[%d]", place);
  }

  if (exist > 1)
  {
    printf("THE NO 4 EXISTS %d TIME\n", exist);
    //WHAT IF I WANT TO KNOW AT WHICH PLACE FIRST 4 IS EXISTS?
  }

  if (exist == 0)
  {
    printf("THE NO 4 DOESNOT EXISTS");
  }

  return 0;
}
