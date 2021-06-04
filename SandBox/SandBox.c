// ********************************************************SPACE FOR LOGIC CHECK****************************************************************
// *****************NOTE: THESE MAY OR MAY NOT BE MY CODE, IT MAY BE POSSIBLE THEY ARE ACCOMANDATED FROM WEB.***********************************
//**********************************************************************************************************************************************
//*********************************************************WORK BELOW THIS LINE*****************************************************************
//! NOT DONE

// #include <stdio.h>

// int main()
// {
//     char sentence[] = "00:16AM";
//     char str[20];
//     int i,j;

//     sscanf(sentence, "%d:%d%s %*s", &i,&j, str);
//     printf("%s  %d %d\n", str, i,j);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char sentence[20];
//     char str[20];
//     int hour, min, sec;

//     printf("ENTER TIME:\n");
//     scanf("%[^\n]%*c", sentence);

//     sscanf(sentence, "%d:%d:%d%s %*s", &hour, &min, &sec, str);
//     printf("%s %d\n", str, hour);

//     if (strcmp(str, "AM") == 0)
//     {
//         if (hour == 12)
//         {
//             hour = 0;
//         }
//     }
//     else
//     {
//         if (hour >= 1 && hour != 12)
//         {
//             hour = hour + 12;
//         }
//     }

//     printf("%d:%d:%d", hour, min, sec);

//     return 0;
// }

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n;
    float x, sum, t;
  

    printf(" Enter the value for x : ");
    scanf("%f", &x);

    printf(" Enter the value for n : ");
    scanf("%d", &n);

    x = x * 3.14159 / 180;
    t = x;
    sum = x;

    /* Loop to calculate the value of Sine */
    for (i = 1; i <= n; i++)
    {
        t = (t * (-1) * x * x) / (2 * i * (2 * i + 1));
        sum = sum + t;
    }

    printf(" The value of Sin(%f) = %.4f", x, sum);
 
}