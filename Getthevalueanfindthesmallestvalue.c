#include <stdio.h>
   
int main()
{
    int number1;
    int number2;
       
    printf("\n Enter number #1 : ");
    scanf("%d", &number1);
     
    printf(" Enter number #2 : ");
    scanf("%d", &number2);
       
    if(number1 < number2)
    {
        printf("\n Minimum is %d\n\n", number1);
    }
    else if(number2 < number1)
    {
        printf("\n Minimum is %d\n\n", number2);
    }
 
    return 0;
}
