//** Find highest frequency character in a string.
//** 25.02.2021
//? IMP: PRINT EQUAL OCCURED ELEMENTS as, ankita kizz...here a, k, i ,j...all have same occurence.
//TODO: IMPORTANT

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20];
//     int count, key, flag, notfound, freq[20];

//     notfound = -1;
//     flag = 0;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {
//         key = 1;

//         for (int j = i + 1; j < count; j++)
//         {
//             if (word[i] == word[j] && !isblank(word[i]) && !isblank(word[j]))
//             {
//                 key++; //? counting repetition
//                 notfound++;
//                 freq[j] = -1; //? converting other repetation(all j value into -1 bcoz we are keeping i value and its repetion  start for loop againg indexing j as i.)
//             }
//         }

//         if (freq[i] != -1) //? STORING REPETATION OF i IN OTHER ARRAY EXCEPT ITS REPETATION AS, a,b,a,a,a
//         {
//             freq[i] = key;
//         }
//     }

//     if (notfound == -1) //?not found condition
//     {
//         printf("NO REPETATION OF CHARACTERS\n");
//         return (0);
//     }

//     for (int i = 0; i < count; i++)
//     {

//         if (freq[0] < freq[i]) //?checking the largest from array of repetations of characters
//         {

//             freq[0] = freq[i];
//             flag = i;
//         }
//         else
//             flag++; //? if no if is exceuted means the first number i.e (freq[0]) is the largest.. so we below direct print word[0](first character in character array)as highest repeted character.
//     }

//     if (flag == count)
//     {
//         printf("THE MOST OCCURED CHARACTER IS %c AND OCCURED TOTAL %d TIMES\n", word[0], freq[0]);
//         return (0);
//     }

//     else
//     {
//         printf("THE MOST OCCURED CHARACTER IS %c AND OCCURED TOTAL %d TIMES\n", word[flag], freq[0]);
//         return (0);
//     }
// }

//***************************************************************************************************************************************
//**REVISION|26.02.2021|**ALSO PRINT EQUAL OCCURED CHARACTERS

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20];
//     int count, key, index[20], m, equal, freq;
//     equal = 0;
//     m = -1;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {
//         freq = 1;
//         for (int j = i + 1; j < count; j++)
//         {
//             if (word[i] == word[j]&&!isblank(word[i])&&!isblank(word[j]))
//             {
//                 key++; //? CREATITINF IF COND FOR CREATING OCCURS OR NOT
//                 freq++;
//                 index[j] = -1;
//             }
//         }

//         if (index[i] != -1)
//         {
//             index[i] = freq;
//         }
//     }

//     // printf("OCCURENCE:\n");

//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if (index[i] == index[j] && index[i] != -1 && index[j] != -1&&!isblank(index[i])&&!isblank(index[j]))
//             {
//                 equal++;
//                 index[j] = -1;

//                 printf("%c , %c", word[i], word[j]);
//                 word[i] = -1; //? AVOID PRINITING ALL TIMES
//             }
//         }
//         if (equal > 0 && index[i] != -1)
//         {
//             printf(" ARE OF SAME FREQUENCY I.E %d ", index[i]);
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (index[0] < index[i]) // THIS COND ONLY EXECUTED WHEN THERE IS NO REPETITION OF OCCURENCE BECAUSE IN THE ABOVE REPETAION CHECK FOR LOOP WE ARE ASSIING -1 TO ALL 'J' AND HERE IF HAS COND GRETER THAN index[0].
//         {

//             index[0] = index[i];
//             m = i;
//         }
//     }

//     if (m != -1)
//     {
//         printf("\nHIGHEST OCCURENCE of %c TOTAL %d TIMES\n", word[m], index[0]);
//     }
//     else
//         printf("\nNO SINGLE CHARACTER IS MOST OCCURED BCOZ THERE IS EQUAL FREQUENCIES OF ABOVE CHARACTERS\n");
//     return (0);
// }

//***************************************************************************************************************************************
//**REVISION|SAME HOUR NOT COMPLETED IN SINGLE ATTEMPT
//!!! CHECK ONCE SANDBOX

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20];
//     int count, key, flag, notfound, m, index[20], n, equal;
//     m = 0;
//     n = -1;
//     notfound = -1;
//     flag = equal = 0;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {
//         key = 1;

//         for (int j = i + 1; j < count; j++)
//         {
//             if (word[i] == word[j] && !isblank(word[i]) && !isblank(word[j]))
//             {
//                 key++; //? counting repetition
//                 notfound++;
//                 index[j] = -1; //? converting other repetation(all j value into -1 bcoz we are keeping i value and its repetion  start for loop againg indexing j as i.)
//             }

//             if (isblank(word[i]))
//             {
//                 index[i] = -1;
//                 // index[j] = -1;
//             }

//             if (isblank(word[j]))
//             {
//                 // index[i] = -1;
//                 index[j] = -1;
//             }
//         }

//         if (index[i] != -1) //? STORING REPETATION OF i IN OTHER ARRAY EXCEPT ITS REPETATION AS, a,b,a,a,a
//         {
//             index[i] = key;
//         }
//     }

//     if (notfound == -1) //?not found condition
//     {
//         printf("NO REPETATION OF CHARACTERS\n");
//         return (0);
//     }

//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if (index[i] == index[j] && index[i] != -2 && index[j] != -1)
//             {
//                 equal++;
//                 index[j] = -1;

//                 printf("%c , %c", word[i], word[j]);
//                 word[i] = -1; //? AVOID PRINITING ALL TIMES
//             }
//         }
//         if (equal > 0 && index[i] != -1)
//         {
//             printf(" ARE OF SAME FREQUENCY I.E %d \n", index[i]);
//             break;
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (index[0] < index[i]) // THIS COND ONLY EXECUTED WHEN THERE IS NO REPETITION OF OCCURENCE BECAUSE IN THE ABOVE REPETAION CHECK FOR LOOP WE ARE ASSIING -1 TO ALL 'J' AND HERE IF HAS COND GRETER THAN index[0].
//         {

//             index[0] = index[i];
//             m = i;
//             n = i;
//         }
//         else
//             m++;
//     }

//     if (n != -1)
//     {

//         if (m == count)
//         {
//             printf("THE MOST OCCURED CHARACTER IS %c AND OCCURED TOTAL %d TIMES\n", word[0], index[0]);
//             return (0);
//         }
//         printf("\nHIGHEST OCCURENCE of '%c' of TOTAL %d TIMES\n", word[m], index[0]);
//         return (0);
//     }

//     else

//     {
//         printf("\nNO SINGLE CHARACTER IS MOST OCCURED BCOZ THERE IS EQUAL FREQUENCIES OF ABOVE CHARACTERS\n");
//         return (0);
//     }

//     return (0);
// }

//***************************************************************************************************************************************
//***************************************************************************************************************************************
//***************************************************************************************************************************************
//**REVISION|27.02.2021|**ALSO PRINT EQUAL OCCURED CHARACTERS
//*****YIPEE!, COMPLETED, 4TH ATTEMPT******

//!! CONDITION AND EXECUTION OF NO REPEATITION OF CHARACTERS IS STILL LEFT

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20];
//     int count, key, index[20], temp, flag, repeat, meta;

//     temp = meta = flag = -1;
//     repeat = 1;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {
//         // flag = -1;
//         key = 1; //? INTIALIZING COUNT TO 1 EVERY TIME OR FOR EVERY VALUE OF 'i'
//         for (int j = i + 1; j < count; j++)
//         {
//             if (isblank(word[i]))
//             {
//                 index[i] = -1;
//             }
//             if (isblank(word[j]))
//             {
//                 index[j] = -1;
//             }

//             if (word[i] == word[j])
//             {
//                 key++;         //? COUNTING OCCURENCE
//                 flag = i;      //? THIS HELPS IN DETERMING THERE IS ANY CHARACTER MORE THAN ONCE OR PRINT "NO REPETATION".
//                 index[j] = -1; //? AVOIDIND REPEATATION OF OCCURENCE LIKE(A,B,A,A,A) COUNT OF ONLY ONE 'A' IS STORED
//             }
//         }

//         if (index[i] != -1) //? STORING COUNT OF OCCURENCE BUT AVOIDIND REPETATAION
//         {
//             index[i] = key;
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (index[i] != -1 && index[0] < index[i]) //? CHECKING FOR THE LARGEST OCCURED CHACATER WITH THE HELP OF THAT ARRAY IN WHICH WE STORED OCCURENCE OF CHRACTERS
//         {

//             index[0] = index[i]; //? CHANGING THE LARGETS NUMBER(HIGHEST OCCUENCE) SO THE WE CAN PUT IT TO FIRST INDEX & CAN EASILY PRINT IT
//             index[i] = -1;       //? AT FIRST WE HAVE ALREADY PUT THE HIGHEST OCCURED CHAR IN OUR FIRST INDEX SO MAKING THAT ACTUAL INDEX OF CHAR =-1
//             temp = i;            //? STORING INDEX OF CHARACTER SO THAT WE CAN PRINT THE OCCURENCE AS WELL AS THAT CHARCTER
//         }
//     }

//     for (int j = 1; j < count; j++)
//     {
//         if (index[j] != -1 && index[0] == index[j]) //? CHECKING WITH HIGHEST OCCURED NUMBERD, AS IS THERE ANY OTHER CHAR OF THAT SAME OCCURENCE......... FOR EQUAL OCCURENCE
//         {

//             meta = j; //? STORING INDEX OF EQUAL OCCURED CHAR, WE HAVE ALREAY 'TEMP' OR THE HIGHEST OCCURED INDEX BUT THIS IS FOR EQUAL OCCURED CHAR
//             repeat++; //? STORING COND, IN ORDER THAT WE CAN PROVIDE A CONDITION IF THERE IS EQUAL OCCURENCE OR NOT
//         }
//     }

//     if (repeat > 1) //? EQUAL OCCURENCE CONDITION
//     {
//         if (temp != -1) //? THAT MEAN FOR LOOP OF (CHECKING HIGHEST OCCURED ELEMENT) IS EXECUTED THAT MEAN HIGEST OCCURED CHAR IS NOT AT i=0.
//         {
//             printf("THERE ARE %d CHARACTERS HAVING SAME AND HIGHEST OCCURENCE, TWO ARE THEM %c & %c AND OCCURED %d TIMES:\n", repeat, word[meta], word[temp], index[0]);
//         }
//         else //? //? THAT MEAN FOR LOOP OF (CHECKING HIGHEST OCCURED ELEMENT) IS NOT EXECUTED THAT MEAN HIGEST OCCURED CHAR IS AT i=0, OR ITSELF i=0
//             printf("THERE ARE %d CHARACTERS HAVING SAME AND HIGHEST OCCURENCE, TWO  ARE THEM %c & %c AND OCCURED %d TIMES:\n", repeat, word[meta], word[0], index[0]);
//     }

//     else if (temp != -1) //? IF THERE IS NO EQUAL OCCURENCE
//     {
//         printf("THE MOST OCCURED CHARACTER IS %c AND OCCURED %d TIMES:\n", word[temp], index[0]);
//     }
//     else
//         printf("THE MOST OCCURED CHARACTER IS %c AND OCCURED %d TIMES:\n", word[0], index[0]);
//     return (0);
// }

//***************************************************************************************************************************************
//***************************************************************************************************************************************
//***************************************************************************************************************************************
//** Find highest frequency character in a string.
//**REVISION|03.03.2021|**ALSO PRINT EQUAL OCCURED CHARACTERS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[20];
    int count, key, equal, index[20], temp, flag;
    temp = flag = -1;
    equal = 1;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]%*c", word);

    count = strlen(word);

    for (int i = 0; i < count; i++)
    {
        key = 1;
        for (int j = i + 1; j < count; j++)
        {
            if (word[i] == word[j] && !isblank(word[i]) && !isblank(word[j]))
            {
                index[j] = -1;
                key++;
            }
        }

        if (index[i] != -1)
        {
            index[i] = key;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (index[0] < index[i])
        {
            index[0] = index[i];
            index[i] = -1;
            temp = i;
        }
    }

    for (int i = 1; i < count; i++)
    {
        if (index[0] == index[i])
        {
            equal++;
            flag = i;
        }
    }

    if (equal > 1)
    {

        if (temp != -1)
            printf("THERE ARE %d CHARACTERS HAVING SAME AND HIGHEST OCCURENCE, TWO ARE THEM %c & %c AND OCCURED %d TIMES:\n", equal, word[flag], word[temp], index[0]);

        else
            printf("THERE ARE %d CHARACTERS HAVING SAME AND HIGHEST OCCURENCE, TWO  ARE THEM %c & %c AND OCCURED %d TIMES:\n", equal, word[flag], word[0], index[0]);
    }

    else
    {
        if (temp != -1)
        {
            printf("THE MOST OCCURED CHARACTER IS %c AND OCCURED %d TIMES:\n", word[temp], index[0]);
        }
        else
            printf("THE MOST OCCURED CHARACTER IS %c AND OCCURED %d TIMES:\n", word[0], index[0]);
    }
    return (0);
}

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    char text[20];
    int data[20] = {'0'};

    printf("ENTER YOUR STRING:\n");
     scanf("%[^\n]%*c", text);

    int count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        int key = 1;
        for (int j = i + 1; text[j] != '\0'; j++)
        {
            if (text[i] == text[j] && data[i] != -1)
            {
                key++;
                data[j] = -1;
            }
        }

        if (text[i] == ' ')
        {
            data[i] = -1;
        }

        if (data[i] != -1)
        {
            data[i] = key;
        }
        count++;
    }

    int max1 = data[0];
    int index1 = 0;
    int temp = 0;

    for (int i = 0; i < count; i++)//FINDING MAXIMUM
    {
        if (max1 < data[i])
        {
            max1 = data[i];
            index1 = i;
            temp++;
        }
    }

    int index2;
    int total = 0;
    for (int i = 0; i < count; i++)//IF MAXIMUM OCCURENCE IN 2 OR MORE
    {
        if (max1 == data[i])
        {
            index2 = i;
            total++;
        }
    }

    if (max1 == 1)//IF MAXIMUM IS 1 OCCRED MEANS SAME OCCURENCE
    {
        printf("ALL OCCURED EQUAL TIMES\n");
    }
    else if (total != 0)// IF EQUAL OCCURENCE LOOP IS EXECUTED
    {
        printf("HIGHEST OCCURENCE: %d TIMES\n", max1);
        printf("TOTAL NUMBER WITH EQUAL HIGHEST OCCURENCE: %d", total);
        printf("TWO OF THEM ARE: %c AND %c", text[index1], text[index2]);
    }
    else    
        printf("%c OCCURED HIGHEST WITH OCCURENCE OF: %d", text[index1], max1);

    return (0);
}