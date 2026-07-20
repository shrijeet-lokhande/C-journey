#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks\n");
    scanf("%d", &marks);

    if(marks<=30){
        printf("you have failed the exam\n");
    } else{printf("you have passed the exam\n");}

    return 0;
}