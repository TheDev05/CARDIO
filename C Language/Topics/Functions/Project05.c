//** Check whether a number is prime, Armstrong or perfect number using functions.
//**PERFECT NUMBER= the sum of divisor is number itself(excluding that number int sum)..as.6=1+2+3
//**ARMSTRONG NUMBER=the sum of didgits with power(power=total digits) is eual to that number itself..as..153=1^3+5^3+3^3

// #include <stdio.h>
// #include <math.h>

// void prime(int num)
// {
//     int key = 0;

//     for (int i = 2; i <= 9; i++)
//     {
//         if (num % i == 0 && i != num)
//         {
//             key++;
//             printf("%d IS NOT A PRIME NUMBER\n", num);
//             break;
//         }
//     }

//     if (key == 0)
//     {
//         printf("%d IS A PRIME NUMBER\n", num);
//     }
// }

// void arm(int num, int count)
// {
//     int rem, res_num;
//     int sum = 0;
//     res_num = num;

//     while (num != 0)
//     {
//         rem = num % 10;
//         sum += pow(rem, count);
//         num = num / 10;
//     }

//     num = res_num;

//     if (sum == num)
//     {
//         printf("%d IS ARMSTRONG NUMBER\n", num);
//     }

//     else
//         printf("%d IS NOT ARMSTRONG NUMBER\n", num);
// }

// void perfect(int num)
// {
//     int res_num = num, sum = 0;

//     for (int i = 1; i <= 9; i++)
//     {
//         if (num % i == 0 && i != num)
//         {
//             sum += i;
//         }
//     }

//     if (sum == num)
//     {
//         printf("%d IS PERFECT NUMBER\n", num);
//     }
//     else
//         printf("%d IS NOT A PERFECT NUMBER\n", num);
// }

// int main()
// {
//     int num, count;

//     printf("ENTER INPUT LIMIT OF YOUR WORD:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     scanf("%d", &num);

//     prime(num);
//     arm(num, count);
//     perfect(num);
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <math.h>

int prime(int num)
{
    for (int i = 2; i <= 9; i++)
    {
        if (num % i == 0 && i != num)
        {
            return (0);
        }
    }
    return (1);
}

int perfect(int num)
{
    int sum = 0;

    for (int i = 1; i <= 9; i++)
    {

        if (num % i == 0 && i != num)
        {

            sum += i;
        }
    }

    if (sum == num)
    {
        return (1);
    }
    else
        return (0);
}

int count(int num)
{
    int i;

    for (i = 0; num != 0; i++)
    {
        int rem = num % 10;

        num = num / 10;
    }
    return (i);
}

int arms(int num)
{
    int digit = count(num);

    int sum = 0;
    int res_num = num;

    for (int i = 0; num != 0; i++)
    {
        int rem = num % 10;
        sum += pow(rem, digit);
        num = num / 10;
    }

    if (sum == res_num)
    {
        return (1);
    }
    else
        return (0);
}

int main()
{
    int num;
    printf("ENTER YOUR NUMBER:\n");
    scanf("%d", &num);

    if (perfect(num))
    {
        printf("NUMBER IS PERFECT NUMBER\n");
    }
    else
        printf("NUMBER IS NOT A PERFECT NUMBER\n");

    if (arms(num))
    {
        printf("NUMBER IS ARMSTRONG NUMBERS\n");
    }
    else
        printf("NUMBER SI NOT A ARMSTROBN NUMBER\n");

    if (prime(num))
    {
        printf("NUMBER IS PRIME NUMNER\n");
    }
    else
        printf("NUMBER IS NOT PERECT NUMBER\n");

    return (0);
}