#include<stdio.h>
int main(){
    int num,flag=0;
    scanf("%d",&num);
    for(int i=2;i<num/2;i++){
        if(num%i ==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("number is not prime");
    }
    else{
        printf("number is prime");
    }
}