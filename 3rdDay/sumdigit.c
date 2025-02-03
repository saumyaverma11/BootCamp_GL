#include<stdio.h>
int sumdigit(int n);
int sumdigit(int n){
    if(n==0){
        return;

    }
    return (n%10+ sumdigit(n/10));

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",    sumdigit(n));

}