//this is a basic calculator made whose logic is made from the switch conditional operator
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of first number \n");
    scanf("%d", &a);

    printf("enter the value of the second number \n");
    scanf("%d", &b);

    char op;
    printf("please specify the operation u want to perform, + - * /");
    scanf(" %c", &op);

    switch(op){
        case '+': printf("the addition is = %d", a+b);
        break;

        case '-': printf("the subtraction is = %d", a-b);
        break;
        
          case '*': printf("the multiplication is = %d", a*b);
        break;

          case '/': printf("the division is = %d", a/b);
        break;

        default : printf("enter a valid operation");
        break;
    }

    return 0;
}