
#include<stdio.h>
int givenarray(int arr[], int n, int k){
    int curr=0;
    int s=0;
    for(int i=0;i<n;i++){
        curr=curr+arr[i];
        while(k<curr){
            curr=curr-arr[s];
            s++;
        }
        if(curr==k){
            printf("(%d, %d)\n",s,i);
            return 1;
        }
        }
        
return 0;
    }
    
int main(){
    int arr[]={2,4,3,6,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key=20;
    int result =givenarray(arr,n,key);
    printf("%d",result);
}