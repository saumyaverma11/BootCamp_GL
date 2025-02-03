#include<stdio.h>
int majority(int arr[], int n){
    int res=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    count = 0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        if(count>n/2){
            printf("the number is %d\n",arr[res]);
            return count;
        }
        else{
            printf("no majority");
        }
    }
}
int main(){
    int arr[]={8,3,4,8,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int res = majority(arr,n);
    printf("the number is repeat %d time ",res);
}