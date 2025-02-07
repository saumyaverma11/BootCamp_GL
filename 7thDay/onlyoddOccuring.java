import java.util.*;

public class onlyoddOccuring {

    public static int odd(int arr[], int n){
        int res=0;
        for(int i=0;i<n;i++){
            res = res ^ arr[i];
        }
        return res;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int n= sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]= sc.nextInt();
        }

       int result = odd(arr,n);
       System.out.println(result);
;   }
}
