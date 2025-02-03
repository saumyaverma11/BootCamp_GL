#include<stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int sliding(int arr[], int n, int k){
    int curr=0;
    int maxsum;
    int minsum;
    for(int i=0;i<k;i++){
        curr=curr+arr[i];
        // maxsum=curr;
        // minsum=curr;
    }
        maxsum=curr;
        minsum=curr;
    for(int i=k;i<n;i++){
        curr=curr+arr[i]-arr[i-k];
         maxsum=max(maxsum,curr);
         minsum=min(minsum,curr);

    }
   
        // minsum=min(minsum,curr);
    printf("maxsum is %d\n", maxsum);
    printf("minsum is %d",minsum);

}
int main(){
    int arr[]={2,-3,-1,8,-5,1};
    int key=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result = sliding(arr,n,key);
}