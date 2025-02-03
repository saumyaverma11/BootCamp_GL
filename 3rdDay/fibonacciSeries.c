#include<stdio.h>
int fibon(int n, int prev1, int prev2);
int fibon(int n, int prev1, int prev2){
    if(n<3){
        return;
    }
    int curr = prev1+prev2;
    printf("%d",curr);
    fibon(n-1,prev2,curr);
}

int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d",0);
    }
    else if(n==2){
        printf("%d %d",0,1);
    }
    else{
        fibon(n,0,1);
    }


}