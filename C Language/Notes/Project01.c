//******PRACTICE OF GOTO FUNCTION*****
#include <stdio.h>
int main()
{
    int weight, balanced, key;
    balanced = 60;
    
again:
    printf("WELCOME! IN WEIGHT CHECK MACHINE:\n");
    printf("ENTER YOUR WEIGHT:\n");
    scanf("%d", &weight);

    if (weight > balanced)
    {
        printf("YOU HAVE TO BURN MORE CALORIES THAN NOW\n\nTYPE 1 FOR TEST AGAIN OR 0 FOR EXIT\n");
        scanf("%d", &key);

        if (key == 1)
        
            goto again;
        
        if (key == 0)
            goto exit;
    }

    else
    {
        printf("YOU ARE OKAY, CONGRATS\n");
    }

exit:
printf("THANK YOU, VISIT AGIAIN\n");
    return 0;
}