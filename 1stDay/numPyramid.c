#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        int num=1;
        for(int j=0;j<i+1;j++){
            printf("%d",num);
            num++;
        }
        int num2=i;
        for(int j=i;j>0;j--){
             
            printf("%d",num2);
           num2--;
        }
        printf("\n");
    }
}