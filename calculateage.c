#include <stdio.h>
#include <time.h>
 
int main()
{
    int age;
    int year_of_birth;
     
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int current_year = (tm.tm_year + 1900) + 543;
     
    printf(" Enter your year of birth (B.E): ");
    scanf("%d", &year_of_birth);
     
    age = current_year - year_of_birth;
     
    printf("\n Your age is %d\n", age);
   
    return 0;
}
