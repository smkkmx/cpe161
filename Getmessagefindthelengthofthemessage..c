#include <stdio.h>
#include <string.h>
 
int main()
{
    int arr_size = 5;
    int i;
    char text[arr_size][100];
     
    printf("\n>>>>> INPUT <<<<<\n");
    for(i = 0; i < arr_size; i++)
    {
        printf(" Enter text %d : ", i+1);
        scanf("%s", &text[i]);
    }
     
    printf("\n");
    printf(">>>>> OUTPUT <<<<<\n");
    for(i = 0; i < arr_size; i++)
    {
        printf(" %d.%s = %d \n", i+1, text[i], strlen(text[i]));
    }
     
    return 0;
}
