#include<stdio.h>
binary(int n,int arr[], int low, int high){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==n){
        return mid;
    }
    else if(arr[mid]>n){
        binary(n,arr,low,mid-1);
    }
    else{
        binary(n,arr,mid+1,high);
    }
}
int main(){
    int n;
    printf("enter key");
    scanf("%d",&n);
    int arr[]={2,4,6,8,10};
    int size= sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=size-1;
    int result=binary(n,arr,low,high);
    if(result==-1){
        printf("key is not present");
    }
    else{
        printf("key is in index: %d",result);
    }

}