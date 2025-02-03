import java.util.*;
public class pairsGivenSum{

    public static void findPairs(int arr[],int n, int target){
        Arrays.sort(arr);
        int low=0;
        int high=n-1;
        while(low<high){
            int sum = arr[low]+arr[high];
            if(sum==target){
                System.out.println(" (" + arr[low] + "," +arr[high] + ")");
                low++;
                high--;  
            }
            else if(sum<target){
                low++;
            }
            else{
                high--;
            }
        }
    }
    public static void main(String args[]){
        int arr[]={-1,1,3,2,1,4,5,7};
        int target=6;
        int n=arr.length;
        // System.out.println("Pairs with given sum are: "+findPairs(arr,n,target));
        findPairs(arr,n,target);
    }
}