#include<stdio.h>
int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
    
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",power(n));
}