#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        int num=1;
        for(int j=0;j<n-i;j++){
            printf("%d",num);
            num++;
        }
        int num2=n-i-1;
        for(int j=num2;j>0;j--){
           printf("%d",num2);
            num2--;
        }
       printf("\n");
    }
return 0;
}
