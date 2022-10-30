#include <stdio.h>
 
int main()
{
    int i;
     
    printf(" Dec\tOct\tHex\n");
    printf(" --------------------\n");
 
    for(i=0; i<=15; i++)
    {
        printf(" %d\t\%o\t\%X\n", i, i, i);
    }
 
    return 0;
}
