//use the ternaery operator to verify if the user is under 18 or 18+

#include<stdio.h>
int main(){
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    age>=18?printf("the user is 18+") : printf("the user is under 18");

    return 0;
}