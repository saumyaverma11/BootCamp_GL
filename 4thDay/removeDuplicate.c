#include<stdio.h>
int removeDuplicate(int arr[], int n){
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[count-1]!=arr[i]){
            arr[count]=arr[i];
            count++;
        }
    }
    return count;
}
int main(){
    int arr[]={2,2,33,33,3,5,4,6,33,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int size= removeDuplicate(arr,n);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}