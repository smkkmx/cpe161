#include <stdio.h>
 
int main()
{
    float num1;
    float num2;
    char op;
    float result = 0;
     
    printf(" Enter for Number1 : ");
    scanf("%f", &num1);
     
    printf(" Enter for Number2 : ");
    scanf("%f", &num2);
     
    printf(" Enter for Operator : ");
    scanf(" %c", &op);
     
    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }
     
    printf("\n Answer : %.2f %c %.2f = %.2f\n", num1, op, num2, result);    
     
    return 0;
}
