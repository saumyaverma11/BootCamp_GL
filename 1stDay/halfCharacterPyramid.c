#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num=64;
        for(int j=0;j<n-i;j++){
            num++;
            printf("%c",num);
            
        }
        for(int j=0;j<2*i-1;j++){
            printf(" ");
        
        }
        if(i==0){
            num=num-1;
            for(int j=0;j<n-i-1;j++){
            printf("%c",num);
            num--;
        }
        }
        else{
        for(int j=0;j<n-i;j++){
            printf("%c",num);
            num--;
        }
        }
        printf("\n");

    }
}