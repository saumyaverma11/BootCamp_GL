#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        int num=65;
        for(int j=0;j<i+1;j++){
            printf("%c",num);
            num++;
        }
        num=65;
        for(int j=0;j<i;j++){
            printf("%c",num+i-1);
            num--;
        }
        printf("\n");
    }
}