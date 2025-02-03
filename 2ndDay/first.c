#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("number is zero");
    }
    else if(n>0){
        printf("number is positive");

    }
    else{
        printf("number is negative");
    }
    return 0;
}