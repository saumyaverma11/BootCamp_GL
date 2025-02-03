#include<stdio.h>
#include<stdlib.h>
// int malloc(int n);
int sum(int l, int r,int temp[]);
int prefixSum(int arr[], int n,int temp[])
{
    temp[0]=arr[0];
    for(int i=1;i<n;i++){
        temp[i]=temp[i-1]+arr[i];
    }
    

}

int sum(int l, int r, int temp[]){
    if(l==0){
        return temp[r];
    }
    else{
        return temp[r]-temp[l-1];
    }
}
int main(){
    int arr[]={2,4,3,6,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *temp = (int *)malloc(n * sizeof(int));
    if(temp==NULL){
        printf("dynamic allocation failed");
    }
    prefixSum(arr,n,temp);
    int l=1;
    int r=4;
    int result = sum(l,r,temp);
    printf("%d",result);
}