//C Program For Convert All Input String Simultaneously Into Asterisk

// #include <stdio.h>
// #include <conio.h> //*GETCH IS USED

// int main()
// {
//     char array[] = "*****";
//     char c;
//     int i;
//     i = 0;

//     printf("ENTER YOUR NAME:\n");
//     while (1) //*FORMING A INFINITE LOOP BUT CONTROL ITS TRIGGRING BY TAKING A CHARACHTER ALWAYS WHEN IT COMES TO LOOP.
//     {
//         c = getch();  //? WHY WE NEED HERE GETCH IT IS NOT DEONE BY GETCHAR?

//         printf("%c", array[i]);
//         i++;

//         if (i == 5) //*HERE AGAIN TRIGGERING LOOP FROM ITS FIRST PLACE.
//         {
//             i = 0;
//         }
//     }
//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|19.02.2021

// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     char num[] = "******";
//     char a;
//     int i = 0;

//     printf("ENTER SOMETHING:\n");

//     while (1)
//     {
//         a = getch();
//         printf("%c", num[i]);
//         i++;

//         if (i == 6)
//         {
//             i = 0;
//         }
//     }

//     return (0);
// }