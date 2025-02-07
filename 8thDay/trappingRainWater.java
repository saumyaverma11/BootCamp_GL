import java.util.*;


public class trappingRainWater {

    public static int storeWater(int arr[],int n){
        int[] leftmax=new int[n];
        int[] rightmax=new int[n];
        leftmax[0]=arr[0];
        for(int i=1;i<n;i++){
            leftmax[i]=Math.max(leftmax[i-1],arr[i]);

        }
        rightmax[n-1]=arr[n-1];
        for(int i=n-2;i>0;i--){
            rightmax[i]=Math.max(rightmax[i+1],arr[i]);
        }
        for(int i=0;i<n;i++){
            System.out.print(leftmax[i]+ " ");

        }
        System.out.print(" \n");

        for(int i=0;i<n;i++){
            System.out.print(rightmax[i]+ " ");

        }
        System.out.print(" \n");

        int water =0;
        for(int i=1;i<n-1;i++){
             water += Math.min(leftmax[i],rightmax[i])-arr[i];
        }
        
        return water;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        
        }
        int res = storeWater(arr,n);
        System.out.println(res);

    }
}
