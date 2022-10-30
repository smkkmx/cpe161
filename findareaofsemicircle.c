#include<stdio.h>
#include<math.h>
 
int main()
{
    float r;
    float area;
      
    printf(" Input value of Radius : ");
    scanf("%f", &r);
     
    area = (M_PI * ( r * r) ) / 2;
   
    printf("\n Area of the semicircle : %.2f \n\n", area );
     
    return 0;
}
