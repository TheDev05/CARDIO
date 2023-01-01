/* Print till N.       
                            4 4 4 4 4 4 4      
                            4 3 3 3 3 3 4      
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4 
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5  
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

LINK: https://www.hackerrank.com/challenges/printing-pattern-2/problem */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = n + (n - 1);

    int p = 2;
    int q = count - 1;

    int key = n;
    int flag = n;

    for (int i = 0; i < count; i++)
    {
        for (int k = 1; k <= count; k++)
        {
            printf("%d ", flag);

            if (p == k)
            {
                for (int j = p; j <= q; j++)
                {
                    printf("%d ", n - i);
                    k = j;
                }
                key--;
                flag--;

                q--;
                p++;
            }
        }

               printf("\n");
    }

    return (0);
}