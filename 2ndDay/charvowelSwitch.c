#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf(" %c",&ch);
    ch=tolower(ch);

    switch(ch){
        case 'a':
        printf("ch is vowel");
        break;
        case 'e':
        printf("ch is vowel");
        break;
        case 'i':
        printf("ch is vowel");
        break;
        case 'o':
        printf("ch is vowel");
        break;
        case 'u':
        printf("ch is vowel");
        break;
        default:
        if(ch>='a' && ch<='z'){
            printf("ch is constant");
        }
        else{
            printf("ch is not valid alphabet");
        }
    }
}