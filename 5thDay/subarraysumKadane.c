#include<stdio.h>
int max(int a, int b);
int subarray(int arr[], int n){
    int maxsum=-50;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum=currsum+arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res= subarray(arr,n);
    printf("%d",res);
}