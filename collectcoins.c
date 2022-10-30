#include <stdio.h>
 
int main()
{
    int max_coin = 30;
    int coin;
    int sum_coin = 0;
     
    while(sum_coin < max_coin)
    {
        if(sum_coin == 0)
        {
            printf(" Please insert %d coins : ", max_coin); 
        }
        else
        {
            printf(" Please insert %d more : ", (max_coin-sum_coin));
        }
         
        scanf("%d", &coin);
        sum_coin += coin;
    }
     
    printf(" Coins is correct ");
     
    return 0;   
}
