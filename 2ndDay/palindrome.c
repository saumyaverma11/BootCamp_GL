#include<stdio.h>
int main(){
    int num,r,d=0;
    scanf("%d",&num);
    int result=num;
    do{
        r=num%10;
        d=d*10+r;
        num=num/10;
    }while(num>0);
    
    if(d== result){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
}