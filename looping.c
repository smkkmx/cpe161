#include <stdio.h>
 
int main()
{
    char str[100];
    int i;
     
    while(1)
    {
        printf("\n Enter char   : ");
        scanf("%s", &str);
         
        i=0;
        while(str[i] != '\0')
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }   
 
            i++;
        }
         
        printf(" Convert char : %s\n", str);
    }
     
    return 0;
}
