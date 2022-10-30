#include <stdio.h>
 
int main()
{
    int course_amount = 5;
    float score;
    float grade_total = 0;
    float gpa;
    int i;
     
    for(i = 0; i < course_amount; i++)
    {
        printf(" Enter score of course #%d : ", i+1);
        scanf("%f", &score);
         
        if(score >= 80){
            grade_total += 4;
        }
        else if(score >= 75){
            grade_total += 3.5;
        }
        else if(score >= 70){
            grade_total += 3;
        }
        else if(score >= 65){
            grade_total += 2.5;
        }
        else if(score >= 60){
            grade_total += 2;
        }
        else if(score >= 55){
            grade_total += 1.5;
        }
        else if(score >= 50){
            grade_total += 1;
        }
        else{
            grade_total += 0;
        }
    }
     
    gpa = grade_total / course_amount;
     
    printf("\n GPA of %d courses = %.2f", course_amount, gpa);
     
    return 0;
}
