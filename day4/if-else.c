// following is a program to verify if the user is an adult or not
#include<stdio.h>
int main()
{
  int age;
  printf("enter the age\n");
  scanf("%d", &age);
  printf("the entered age is : %d\n", age);

  if(age>=18)
  {printf("the user is adult");}

  else{printf("the user is minor");}

  return 0;
}


