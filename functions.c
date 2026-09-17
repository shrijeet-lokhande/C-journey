#include<stdio.h>
float calc(float a,float b){
    char op;
    float result;
    printf("\n enter the operation = ");
    scanf(" %c",&op);

    switch(op){
        case '+':
        result = a+b;
        break;

        case '-':
        result = a-b;
        break;

        case '*':
        result = a*b;
        break;

        case '/':
        result = a/b;
        break;

        default:
        printf("\n enter a valid operation");
        
    }

    return result;
}



int main(){
    float a,b;
    float result;
    printf("\n enter the numbers a and b ");
    scanf("%f%f",&a,&b);

    if(a!=0 && b!=0){
        result = calc(a,b);
        printf("answer = %f",result);
    }
    else{
        printf("\n enter a valid number that is non zero");
    }

    return 0;
}


