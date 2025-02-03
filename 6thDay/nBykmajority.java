import java.util.*;
public class nBykmajority{

    // public static void  majority(int arr[], int n,int k){
    //     if(k<=1){
    //         System.out.println("k want atleast more than 1 ");
    //     }
    //     int [] candidates = new int[k-1];
    //     int [] counts = new int[k-1];
    //     // for(i=1;i<n;i++){
    //     //     if(arr[res]==arr[i]){
    //     //         curr++;
    //     //     }
    //     //     else{
    //     //         curr--;
    //     //     }
    //     //     if(curr==0){
    //     //         res=i;
    //     //         // print(arr,n,k,res);
    //     //         curr=1;
    //     //     }
    //     // }
    //     // // temp[i-1]=arr[res];
    //     // print(arr,n,k,arr[res]);
    //     // curr=0;
    //     // for(int i=0;i<n;i++){
    //     //     if(arr[res]==arr[i]){
    //     //         curr++;
    //     //     }
    //     //     if(curr> n/k){
    //     //         System.out.println(arr[res]);
    //     //     }
    //     // }
    // }

    // public static void print(int arr[], int n,int k, int temp[]){
    //     int curr=0;
    //     int j=0;
    //     for(int i=0;i<n;i++){
    //         if(temp[j]==arr[i]){
    //             curr++;
    //         }

    //         if(curr > n/k){
    //             System.out.println(temp[i]);
    //         }
    //         else{
    //             j++;
    //         }

    //     }
    // }



       public static void print(int arr[], int n,int k, int res){
        int curr=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[res]==arr[i]){
                curr++;
            }
        }

            if(curr > n/k){
                System.out.println(arr[res]);
            }
            else{
                j++;
            }

        
    }



        public static void  majority(int arr[], int n,int k){
            if(k<=1){
                System.out.println("k atleast more than 1");
            }
            int [] candidates = new int[k-1];
            int [] counts = new int[k-1];
        }
    public static void main( String args[]){
        int arr[]={8,4,2,2,2,8,4,8,2,8};
        int n=arr.length;
        int k = 2;
        majority(arr,n,k);
    }
}