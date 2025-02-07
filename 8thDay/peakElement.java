public class peakElement {

public static int peak(int arr[]){
    int low=0;
    int n=arr.length;
    int high=n-1;
    int mid;
    while(low<=high){
         mid = (low+high)/2;
        if((mid==0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid] )){
            return arr[mid];
        }
        else if(arr[mid]<arr[mid+1]){    //if the middle element is less than there +1 element then check right side of middle element.
            low=mid+1;
        }
        else{     //if the middle element is  greater than there 
            high=mid-1;
        }

    }
    return -1;
}


public static void main(String args[]){
        int[] arr= {2,3,8,6,9,4,1};
        int res = peak(arr);
        System.out.print(res);
    

    }
}
