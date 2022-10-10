// Practical 2.5: In a class of N students where girls and boys ratio is p:q Savita ranked rth from the top. If there are m (m<r) boys ahead of Savita, 
// how many girls are after her rank ?, Also find whether she is among top 10 students of the class or not ?
// HELP: https://www.sawaal.com/ratio-and-proportion-questions-and-answers/in-a-class-of-39-students-the-ratio-of-boys-and-girls-is-2-1-radhika-ranks-15th-among-all-the-studen_11646

#include <stdio.h>
int main()
{
    int total,boys_ratio,girls_ratio,rank,boys,girls,boys_ahead,girls_ahead,girls_below;

    printf("ENTER THE TOTAL NO OF STUDENTS:\n");
    scanf("%d",&total);

    printf("ENTER THE RATIO OF BOYS THEN GIRLS:\n");
    scanf("%d %d", &boys_ratio,&girls_ratio);
    
    try_again :
    printf("ENTER THE NO OF BOYS AHEAD OF SAVITA:\n");
    scanf("%d", &boys_ahead);

    printf("ENTER THE RANK FROM TOP SAVITA HOLDS:\n");
    scanf("%d",&rank);

    boys=(boys_ratio*total)/(boys_ratio+girls_ratio);
    girls=(girls_ratio*total)/(boys_ratio+girls_ratio);

    girls_ahead=rank-boys_ahead;
    girls_below=girls-girls_ahead;


    if(rank>=boys_ahead)
    printf("THE GIRLS BELOW SAVITA IS %d\n", girls_below);
    else
    {
        printf("INVALID DATA, BOYS AHEAD IS NOT MORE THAN RANK\nTRY AGAIN\n");
        goto try_again;
    }
    




    if(rank<=10)
    printf("SAVITA HOLDS A RANK BETWEEN TOP 10\n");
    else
    printf("UNFORTUNETLY SAVITA IS NOT BETWEEN TOP 10 STUDENTS\n");
    
return 0;   
}
