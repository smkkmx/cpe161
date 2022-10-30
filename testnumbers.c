#include <stdio.h>
 
int main()
{
    int div_by = 5;
    int number;
     
    printf(" Enter number : ");
    scanf("%d", &number);
     
    if(number % div_by == 0)
    {
        printf("\n %d is divisible by %d", number, div_by);
    }
    else
    {
        printf("\n %d is not divisible by %d", number, div_by);
    }
     
    return 0;
}
