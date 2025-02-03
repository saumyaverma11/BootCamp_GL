#include<stdio.h>
int reverseArray(int arr[], int n){
    int low=0;
    int high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    return n;
}
int main(){
    int arr[]={2,4,1,5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arrrr= reverseArray(arr,n);
    for(int i=0;i<arrrr;i++){
        printf("%d ",arr[i]);
    }
}