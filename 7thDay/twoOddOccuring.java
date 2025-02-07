
import java.util.*;

public class twoOddOccuring {

    public static void Occuring(int arr[]){
        int n=0;
        for(int i=0;i<arr.length;i++){
            n= n ^ arr[i];
        }
        int x = n&(~(n-1));
        int res=0, res1=0;
        for(int i=0;i<arr.length;i++){
           if((x & arr[i])==0){
            res = res ^arr[i];
           }
           else{
            res1 = res1 ^ arr[i];
           }

        }
         System.out.println(res  + " "  + res1);
    }
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);

        int arr[]=new int[8];
        for(int i=0;i<8;i++){
            arr[i]=sc.nextInt();
        }

        Occuring(arr);

    }
}
