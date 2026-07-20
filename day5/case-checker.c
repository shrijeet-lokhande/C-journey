    // this is a program to check if the letters are upper case or not
    #include<stdio.h>
    int main(){
        char ch;
        printf("enter the character : ");
        scanf("%c", &ch);

        if(ch>='A' && ch<='Z'){
            printf("\nUPPER CASE");
        }
        else{printf("\nlower case");}

        return 0;
    }