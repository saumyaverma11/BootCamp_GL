#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num=65;
        for(int j=0;j<i+1;j++){
            printf(" %c",num);
        num++;
        }
        printf("\n");
    }
}