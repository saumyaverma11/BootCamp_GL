#include<stdio.h>
int swap(int a, int b);
int movezeroToend(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
    return n;
}
int main(){
    int arr[]={3,4,2,0,5,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int size = movezeroToend(arr,n);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}