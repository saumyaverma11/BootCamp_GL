#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       for(int j=0;j<i;j++){
        printf(" ");
       }
       for(int j=0;j<2*(n-i)-1;j++){
        int num=2*(n-i)-1;
        if(j==0 || i==0 || j==num-1 ){
            printf("*");
        }
        else{
            printf(" ");
        }
       }
    printf("\n");
    }
   
}