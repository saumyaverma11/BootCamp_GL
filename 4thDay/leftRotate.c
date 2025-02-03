#include<stdio.h>
int reverse(int arr[], int low,int high);
int leftRotate(int arr[], int n , int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    return n;
}
int reverse(int arr[], int low, int high){
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }

}
int main(){
    int arr[]={2,3,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d;
    scanf("%d",&d);
    int result = leftRotate(arr,n,d);
    for(int i=0;i<result;i++){
        printf("%d",arr[i]);
    }
}