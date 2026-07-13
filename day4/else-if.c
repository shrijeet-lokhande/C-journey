// write a program to grade the marks into A,B,C for 90+,50+ and 20+ marks

#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks\n");
    scanf("%d", &marks);
    printf("the entered marks are = %d\n", marks);

    if(marks>=90&& marks<=100){
        printf("A grade\n");
    }

    else if(marks>=50){printf("B grade\n");}
    else {printf( "C grade\n");}

    return 0;
}