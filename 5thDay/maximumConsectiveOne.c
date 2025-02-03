#include<stdio.h>
int max(int a, int b);
int consecOne(int arr[],int n){
    int count=0;
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            count=0;
        }
        res=max(res,count);
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
    int arr[]={1,1,1,1,1,1,1,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int result = consecOne(arr,n);
    printf("%d",result);
    return 0;
}