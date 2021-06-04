//***************************************************************************************************************************************
//**Find lowest frequency character in a string.
//**ALSO PRINT EQUAL OCCURED CHARACTERS
//**04.03.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[20];
    int count, equal, temp, flag, key, index[20];
    temp = -1;
    flag = equal = 1;

    printf("ENTER YOUR WORD:\n");
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

            if (isblank(word[i]))
            {
                index[i] = -1;
               
            }

            if (isblank(word[j]))
            {
                index[j]= -1;
                
            }
        }
        if (index[i] != -1)
        {
            index[i] = key;
        }
    }

    
    for (int i = 0; i < count; i++)
    {
        if (index[0] > index[i] && index[i] != -1)
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
            flag=i;
        }
    }

     if (equal > 1)
    {

        if (temp != -1)
            printf("THERE ARE %d CHARACTERS HAVING SAME AND LOWEST OCCURENCE, TWO ARE THEM %c & %c AND OCCURED %d TIMES:\n", equal, word[flag], word[temp], index[0]);

        else
            printf("THERE ARE %d CHARACTERS HAVING SAME AND LOWEST OCCURENCE, TWO  ARE THEM %c & %c AND OCCURED %d TIMES:\n", equal, word[flag], word[0], index[0]);
    }

    else
    {
    if (temp != -1)
    {
        printf("THE MOST LOWEST OCCURED CHARACTER IS %c AND OCCURED %d TIMES:\n", word[temp], index[0]);
    }
    else
        printf("THE MOST LOWSET OCCURED CHARACTER IS %c AND OCCURED %d TIMES:\n", word[0], index[0]);
    }
    return (0);
}
