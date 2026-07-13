/*Question- write a program to check if the number is divisible by 2 or not*/
#include<stdio.h>
int main(){
    int a;
    printf("enter the number\n");
    scanf("%d", &a);

    int b = a%2;

    if(b==0)
      {printf("the number us divisible by 2\n");}

      else
        {printf("the number is not divisible by 2\n");}

        return 0;
}