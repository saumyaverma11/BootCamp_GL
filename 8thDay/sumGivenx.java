import java.util.*;

public class sumGivenx {
    public static void sum(int arr[],int key){
        int curr=0;
        int low=0;
        int high=arr.length-1;

        while(low<=high){
            if((arr[low]+arr[high])==key){
                System.out.print("Indexes are:  (" + low +"," + high +") \n");
                System.out.print("Numbers are:  ("+ arr[low]+"," +arr[high] + ")");
                break;
            }
            else if((arr[low]+arr[high])<key){
                low++;
            }
            else{
                high--;
            }

        }
    }
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int[] arr={2,3,5,10,15};
        int key = sc.nextInt();
        sum(arr,key);
    }
}
