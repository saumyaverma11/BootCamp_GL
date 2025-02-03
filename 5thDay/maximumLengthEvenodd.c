#include<stdio.h>
int max(int a, int b);
int maximum(int arr[], int n){
    int curr=1;
    int res=1;
    for(int i=1;i<n;i++){
        if ((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
            curr++;
            res=max(curr,res);
        }
        else{
            curr=1;
        }
    }
    return res;
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
    int arr[]={1,1,2,3,1,1,1,1,4,5,4,1,2};
    // int arr[]={2,5,4,3,8,1,2,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = maximum(arr,n);
    printf("%d",result);
    return 0;

}