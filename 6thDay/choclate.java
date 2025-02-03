import java.util.*;
public class choclate{

    public static void minDiff(int arr[], int n,int m){
        if(m>n){
            System.out.println("distributuon not possible");
        }
        int min=Integer.MIN_VALUE;
        int res = arr[m-1] + arr[0];
        for(int i=1;i+m-1<n;i++){
            res= Math.min(res,arr[i+m-1] - arr[i]);
        }
        System.out.println(res);
    }
    public static void main(String args[]){
        int arr[]={7,3,1,8,9,12,56};
        int n=arr.length;
        Arrays.sort(arr);
        Scanner sc = new Scanner(System.in);
        int m= sc.nextInt();
        minDiff(arr,n,m);
    }
}
