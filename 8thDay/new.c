#include<stdio.h>
int pairSum(int arr[],int n,int x,int s){
	int low=s,high=n-1;
    while(low<=high){
    	if(arr[low]+arr[high]==x){
		
    	printf("%d %d",arr[low],arr[high]);
    	return 1;
    }
    	else if((arr[low]+arr[high])<x){
		
    	low++;
    }
    	else{
		
    	high--;
    }
	}
	return 0;	
}

int triplet(int arr[],int n,int x){
	int i,s;
	for(i=0;i<n-2;i++){
    // printf("%d ",arr[i]);

	if(pairSum(arr,n,x-arr[i],i+1)){
	printf(" %d",arr[i]);
	return 1;
    }
}

return 0;
}
int main(){
	int arr[5]={2,5,10,15,18};
	int n=5,x=33;
	if (!triplet(arr, n, x)) {
        printf("No triplet found\n");
}
	return 0;
}