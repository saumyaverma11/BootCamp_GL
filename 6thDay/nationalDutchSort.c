//when you have 3 numbers then sort it in increasing order using National Dutch algorithm.


#include<stdio.h>
int swap(int *a , int *b);
void nationalDutch(int arr[], int n){
    int mid=0;
    int low=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(&arr[mid],&arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;

        }
        else{
            swap(&arr[mid],&arr[high]);
            high--;
        }
    }
}
int swap(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int arr[]={1,0,1,2,2,0,1,1,0,0,2,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    nationalDutch(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}