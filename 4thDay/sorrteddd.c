#include<stdio.h>

int arraysorted(int arr[], int n){
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                return 0;
            }
        }
        return 1;
}
   
int main(){
    int arr[]={2,5,6,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n= arraysorted(arr,size);
    if(n==0){
        printf("array is not sorted");
    }
    else{
        printf("array is sorted");
    }
}