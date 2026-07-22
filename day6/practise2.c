// this is a program to print the table of the number entered by the user
#include<stdio.h>
int main(){
    printf("enter the number u want the table of = ");
    int a; // the number whose table we want
    scanf("%d", &a);


    printf("enter the places u want the table to be = ");
    int b; // number of places we want table to be
    scanf("%d", &b);

    printf("enter the number u want your tables to start from = ");
    int c;

    scanf("%d", &c);
   

    for(int i=c; i<=b;i++){
        printf("%d\n", a*i);
    }

    return 0;
    
}