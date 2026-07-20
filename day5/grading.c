/*this program is to grade a student  on the basis of following conditions
marks are less than 30 then C grade
marks are more than equal to 30 and the marks are less than 70 then B grade
marks are more than equal to 70 and marks are less than 90 then A grade
marks are more than equal to 90 and marks are less than 100 then A+ grade.
*/

#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks = ");
    scanf("%d", &marks);

    if(marks>=90 && marks<=100){
        printf("A+ grade");}
    else if (marks >=70 && marks<90){
        printf("B grade");}
    else if(marks=30 && marks>70){
        printf("C grade");}

    else{printf("failed in the exam u dumb kid");}

    return 0;
}