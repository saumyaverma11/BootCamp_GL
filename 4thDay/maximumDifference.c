#include<stdio.h>
int max(int a, int b);

// my approach 


// int maximumDiff(int arr[], int n){
//     int count =0;
//     int res=0;
//     for(int i=0;i<n;i++){
//         int j=i+1;
//         int diff=arr[j]-arr[i];
//         res=res+diff;
//         count=max(count,res);
//         j++;
//     }
//     return count;
// }

int maximumDiff(int arr[], int n){
    int minval = arr[0];
    int maxval=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>minval){
           int diff = arr[i]-minval;
           maxval= max(diff,maxval);
        }
        if(arr[i]<minval){
            minval=arr[i];
        }
    }
    return maxval;
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
    // int arr[]={2,5,10,5,3,8};
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};  
// int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};  
//    int arr[] = {7, 1, 5, 3, 6, 4};  
// int arr[] = {10, 20};  
// int arr[] = {100, 180, 260, 310, 40, 535, 695};  
// int arr[] = {1, 90, 10, 110};




    int size= sizeof(arr)/sizeof(arr[0]);
    int result = maximumDiff(arr,size);
    printf("%d",result);
    return 0;
}