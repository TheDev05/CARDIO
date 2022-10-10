//A SHOP STORES N TYPE OF ITEMS GIVEN THE NUMBER OF ITEMS SOLD DURING A MONTH AND THE CORRESPONDING THE UNIT PRICES COMPUTE THE TOTAL MONTHLY SALE
//ASSUME SHOPKEEPAR HAVE 5 TYPES OF DIFFRENT ITEMS 

#include <stdio.h>
int main()
{
    int sum,sale,item_price[5];
    int item_sold[5];
    sum=0;
    

    printf("ENTER ITEM PRICE THEN ITEM SOLD ONE BY ONE:");

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        scanf("%d %d",&item_price[i],&item_sold[i]);
    }
    
   

    for (int i = 0; i < 5; i++)
    {
        
        sale=item_price[i]*item_sold[i];
        sum=sum+sale;
    }

 printf("THE MONTHLY SALE IS %d", sum);

 return 0;   
}