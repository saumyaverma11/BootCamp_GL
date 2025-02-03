#include<stdio.h>
int main(){
    int num,count;
    printf("enter number:");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        count=0;
        for(int j=1;j<=num;j++){
            if(i%j ==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }
}