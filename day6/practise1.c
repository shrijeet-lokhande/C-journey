//print the numbers from 0 to n where the n is 
//input from the user

#include<stdio.h>
int main(){
    printf("enter the number = ");
    int a;
    scanf("%d", &a);

    int i = 0;
    while(i<=a){
        printf("%d\t", i);
        i++;
    }
    return 0;
}