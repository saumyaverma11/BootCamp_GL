#include<stdio.h>
int leaders(int arr[], int n){
    int last=arr[n-1];
    printf("%d ",last);
    for(int i=n-2;i>=0;i--){
            // if(arr[i]>arr[n-1]){
            //     arr[n-1]=arr[i];
            //     printf("%d ",arr[n-1]);

            // }
             if(arr[i]>last){
                last=arr[i];
                printf("%d ",last);

            }
    }

}
int main(){
    // int arr[]={2,5,4,2,1};
        // int arr[]={9,2,7,1,4,5};
                // int arr[]={2,1,6,4,8};
                // int arr[]={1,2,3,4,5};
        // int arr[]={8,4,6,3,2,1};
        int arr[]={1,8,6,3,5,0,2,4};


    int n=sizeof(arr)/sizeof(arr[0]);
    leaders(arr,n);

}