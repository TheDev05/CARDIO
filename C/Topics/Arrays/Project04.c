// C Program For Print "I AM IDIOT" Instead Of ANY THING TYPED OR INPUTTED Using Array

// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     char name[] = "I AM LEGEND";
//     char m;
//     int i = 0;

//     printf("ENTER ANYTHING:\n");

//     while (1) //CREATING INFINITE LOOP BUT TAKE A PAUSE WITH GETCH NEXT AFTER IT (DONT PRINT AFTER INFINITE LOOP)
//     {
//         m = getch();           //ACCEPTING ANY CHARACTER FROM KEYBOARD
//         printf("%c", name[i]); //i IS INSILIZED AS 0 ABOVE
//         i++;

//         if (i == 12) //HERE THE WORD ENDS PUT A SPACE THEN PRINT FROM STARTING OF WORD (i=0)
//         {

//             printf("  ");
//             i = 0;
//         }
//     }
//     return (0);
// }

// **************************************************************************************************************************************
// **REVISION|19.02.2021

// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     char sen1[] = "i am an idiot", a;
//     int i = 0;

//     printf("TYPE SOMETHING:\n");

//     while (1)
//     {
//         a = getch();
//         printf("%c", sen1[i]);
//             i++;

//         if (i == 13)
//         {
//             printf(" ");
//             i = 0;
//         }
//     }
//     return (0);
// }

//***********************************************************************************************************************************************
//**RIVISON**

// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     char input, str[] = "NoobCoder";
//     int i = 0;

//     printf("ENTER SOMETHING:\n");

//     while (1)
//     {
//         getch();
//         printf("%c", str[i]);
//         i++;

//         if (i == 9)
//         {
//             printf(" ", str[10]);
//             i = 0;
//         }
//     }

//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <conio.h>

int main()
{
    char text[] = "I AM NOOB";
    char ch;
    int i = 0;

    printf("ENTER SOMETHING:\n");
    while (1)
    {
        ch = getch();
        printf("%c", text[i]);
        i++;

        if (i == 9)
        {
            printf(" ");
            i = 0;
        }
    }
    return (0);
}
