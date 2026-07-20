#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks\n");
    scanf("%d", &marks);

    if(marks<=30){
        printf("you have failed the exam\n");
    } else{printf("you have passed the exam\n");} // now the same can be done using the ternary statement

    marks<=30?printf("you have failed the exam\n"):printf("you have passed the exam\n");

    return 0;
}