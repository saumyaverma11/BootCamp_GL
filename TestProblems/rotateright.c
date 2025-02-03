#include<stdio.h>
int printarray(int arr[], int n);

int reverse(int arr[], int l, int h);
// int printarray(int arr[], int n);


int rotate(int arr[], int n, int k){
    reverse(arr,0,k-1);
    reverse(arr,k-1,n);
    reverse(arr,0,n);
}
int reverse(int arr[], int l, int h){
    int temp;
    while(l<h){
        temp=arr[l];
        arr[l]=arr[h];
        arr[h]=temp;
        l++;
        h--;
    }

    
}
int printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    // int n;
    // int k;
    // scanf("%d",&n);
    // scanf("%d",&k);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    int arr[]={50,40,10,20,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    scanf("%d",&k);
    printarray(arr,n);

    rotate(arr,n,k);
    printarray(arr,n);
    return 0;
}