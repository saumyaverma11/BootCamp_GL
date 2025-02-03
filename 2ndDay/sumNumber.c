#include<stdio.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("sum of %d natural number is %d",num,sum);
    return 0;
}