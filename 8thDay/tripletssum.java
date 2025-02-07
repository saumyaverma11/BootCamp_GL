import java.util.*;

public class tripletssum {
    public static void sum(int arr[],int n,int diff, int res){
        int low=res;
        int high=arr.length-1;

        while(low<high){
            if((arr[low]+arr[high])==diff){
                System.out.print("Indexes are:  (" +  (low-1)+"," + low +"," + high +") \n");
                System.out.print("Numbers are:  (" +  arr[low-1] + ","+  arr[low]+"," +arr[high] + ")\n");
                break;
            }
            else if((arr[low]+arr[high])<diff){
                low++;
            }
            else{
                high--;
            }

        }
    }
    public static int triplet(int arr[],int target){
        int n = arr.length;
        for(int i=0;i<n-2;i++){
            int diff = target- arr[i];
            sum(arr,n,diff,i+1);
            
        }
        

        return 0;
    }

    public static void multiipleTriplets(int arr[], int target){
        int n = arr.length;
        for(int i=0;i<n-2;i++){
            int low= i+1;
            int high=n-1;
            while(low<high){
                int sum = arr[i] +arr[low]+arr[high];
                if(sum == target){
                    System.out.print("Indexes are : ("+ i +","+low+","+high+")\n");
                    System.out.print("Numbers are : ("+ arr[i] +","+arr[low]+","+arr[high]+")\n");
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
    }
    public static void main(String args[]){
        int[] arr={1,2,3,4,5};
        // int[] arr= {21,25,30,35,11};
        int target=8;
        triplet(arr,target);

        multiipleTriplets(arr, target);

    }
}
