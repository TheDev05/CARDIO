// Practical 3.1: In a class of n students the boys to girls ratio is p:q. Find no. boys and girls in the class and print :

// 1)    If boys are more than or equal to 70% in the class then print gender partiality in education

// 2)    If difference of boys are girls is diff and in range -5<=diff<=5 then print equal opportunities of education for both

// 3)    If girls are more than equal to 70% then print girls dominating in education.

// 4)    For all others cases print no conclusion drawn


#include <stdio.h>
int main()
{
    int n,p,q,boys_ratio,girls_ratio,boys,girls,perc_of_boys,perc_of_girls,diff;
    printf("Enter the total no of students:\n");
    scanf("%d", &n);
    printf("Enter the value of ratio of boys then girls:\n");
    scanf("%d %d", &boys_ratio,&girls_ratio);

    boys=n*boys_ratio/(girls_ratio+boys_ratio);
    girls=n-boys;
    perc_of_boys=(boys*100)/n;  //FORMULLA OF FINDING PERCENTAGE, (THAT NO/TOTAL NO) *100
    diff=boys-girls;
    perc_of_girls=(girls*100)/n;
    

    printf("NUMBER OF BOYS IN CLASS IS %d\n", boys);
    printf("NUMBER OF GIRLS IN CLASS IS %d\n", girls);

    printf("PERCENT OF BOYS IN CLASS IS %d\n", perc_of_boys);
    printf("PERCENT OF GIRLS IN CLASS IS %d\n", perc_of_girls);
    printf("THE DIFFRENCE BETWEEN BOYS AND GIRLS IS %d\n", diff);

    if(perc_of_boys>=70)  //BOTH ARE PECENTAGE, NO MATTER  % SIGN IS NOT SHOWN
    printf("GENDER PARTIALLITY IN EDUCATION\n");
    

    else
    {
        if((-5<=diff)&&(diff<=5))
        printf("EQUAL OPPORTUNITIES OF EUCATION FOR BOTH\n");
        

            else
            {
                if(perc_of_girls>=70)
                printf("GIRLS DOMINATING IN EDUCATION\n");
                

                 else
                 printf("NO CONCLUSION DRAWN\n");
            }     

    }


return 0;
        
        
}