#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100] = " CS ";
     
    strcat(str, "Developers ");
    strcat(str, "URL: ");
    strcat(str, "https://www.comscidev.com/ ");
     
    printf("\n%s\n", str);
     
    return 0;
}
