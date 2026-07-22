//this is a program to keep taking user input untill the user enters an odd number

#include<stdio.h>
int main(){
  int a;  
    do{
    
        printf("enter the number = ");
        scanf("%d",&a);
    }while(a%2==0);

    return 0;
}
