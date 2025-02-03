#include<stdio.h>
int main(){
    char ch;
    scanf(" %c",&ch);
    if(ch >='A' || ch<='Z'){
        printf("character is in UpperCase");
    }
    else if(ch>='a' || ch<='z'){
        printf("character is in Lowercase");

    }
    else{
        printf("character is a special character");
    }
}