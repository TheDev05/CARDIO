// // Program to Check Character Is Uppercase, Lowercase Alphabet or a Digit or a Special Symbol

#include <stdio.h>
int main()
{
    char letter,upper,lower;

    printf("ENTER YOUR LETTER\n");
    letter=getchar();

   

    // upper=toupper(letter);
    // upper=tolower(letter);
    // ***NO NEED OF THIS***
   
  
    if(letter>='A'&& letter<='Z')
    {
           printf("ENTERED LETTER IS OF UPPERCASE\n");
    }

    else        
      {
        if((letter>='a') && (letter<='z'))
        {
       printf("ENTERED LETTER IS OF LOWERCASE\n");
        }

       else
       printf("ENTERED LETTER IS INVALID\n");
      }
    
        

return 0;

}



