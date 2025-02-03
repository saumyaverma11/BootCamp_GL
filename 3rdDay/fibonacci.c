#include<stdio.h>
int fibon(int n){
    
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    int ans = fibon(n-1) + fibon(n-2);
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibon(n));
    return 0;
}