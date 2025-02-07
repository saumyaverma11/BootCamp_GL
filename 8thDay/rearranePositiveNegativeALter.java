import java.util.*;

public class rearranePositiveNegativeALter{

    public static void rearrange(int arr[]){
        int low=0;
        int n=arr.length;
        int high=arr.length-1;
        int mid =0;
        while(mid<high){
            if(arr[mid]<0){
                int temp= arr[mid];
                arr[mid]=arr[low];
                arr[low]=temp;
                low++;
                mid++;
            }
            else if(arr[mid]>0){
                int temp= arr[mid];
                arr[mid]=arr[high];
                arr[high]=temp;          
                high--;
            }
           
        }
        System.out.print(low+"\n");

        int neg=0;
        int pos=low;
        while(pos<n && neg<pos && arr[neg]<0){
            int temp=arr[neg];
            arr[neg]=arr[pos];
            arr[pos]=temp;
            neg=neg+2;
            pos++;
        }
        
    }
    public static void main(String args[]){
        System.out.print("the number of positive elements should be equal to the number of negative numbers\n");
        int arr[]={-1,2,-3,4,5,-6,-7,8,9};
        int n=arr.length;
        rearrange(arr);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+ " ");
        }
    }
}
