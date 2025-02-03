#include<stdio.h>
int secondLargest(int arr[], int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1){
                res=i;
            }
            else if(arr[res]<arr[i]){
                res=i;
            }

        }

    }
    return arr[res];
}
int main(){
    int arr[]={2,5,1,8,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n= secondLargest(arr,size);
    printf("second largest is %d",n);
}