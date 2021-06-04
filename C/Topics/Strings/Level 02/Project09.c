//***Remove the last occurrence of a character from a string.
//***06.03.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[20], get;
    int count, key;

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    printf("ENTER THE CHARACTER YOU WANT TO REMOVE:\n");
    get = getchar();

    count = strlen(word);

    for (int i = count-1; i >= 0; i--)//? ** everything as of we are deleting from above but the conly change in the direction of search ...here we are seraching from down, once found delete as same aswe did in all.
    {
        if (word[i] == get)
        {
            while (i < count)
            {
                word[i] = word[i + 1];
                i++;
            }
            count--;
            break;
        }
    }

    printf("%s", word);
    return (0);
}