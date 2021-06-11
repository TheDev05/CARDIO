/* Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string. 

https://www.hackerrank.com/challenges/frequency-of-digits-1/ */
//*HELP: https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
//TODO: IMPORTANT: converting int char to int type

#include <stdio.h>
#include <string.h>

int main()
{
    char text[1002];
    scanf("%[^\n]%*c", text);

    int count = strlen(text);
    int res[10] = {0}; //*NOT {'0'};

    for (int i = 0; i < count; i++)
    {
        int key = 1;

        if (text[i] >= '0' && text[i] <= '9')
        {
            for (int j = i + 1; j < count; j++)
            {
                if (text[i] == text[j])
                {
                    key++;
                }
            }

            int index = text[i] - '0';
            if (res[index] == 0)
            {
                res[index] = key;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", res[i]);
    }

    return (0);
}