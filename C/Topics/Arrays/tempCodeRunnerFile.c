#include <stdio.h>

int main()
{
    int arr[20], count, loc, pos;

    printf("ENTER THR TOTAL DGITS IN YOUR INPUT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("ENTER THE POSITION OF ELEMENT YOU WANT TO DELETE:\n");
    scanf("%d", &loc);

    pos=loc-1; //THE ACTUATL COUNT OR USER COUNT IS DIFFER FROM THE POINT OF VIEW FROM ARRAY SIDE; USER COUNT FROM 1 BUT ARRAY 0.

   while (pos<count)
   {
       arr[pos]=arr[pos+1]; //DELETING MEANS WE SLIIDES VALUE A POINT ABOVE THIS IS DONE FOR ALL VALUE WHICH BELONGS BELOW THE PARTICULAR CHOICE GIVEN BY USER!
       pos++;
   }

   count--; //THIS MODIFIER IS NOT FOR WHILE LOOP BUT FOR NEXT ITERATION HERE FOR PRINTING VALUE
            //COUNT VALUE O LENGTH OF ARRAY DEC AS ANY VALUE DELETES FROM THAT.

    printf("YOUR REQUIRED SET OF INPUT AFTER DELETION IS :\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d", arr[i]);

    }

    return (0);
}