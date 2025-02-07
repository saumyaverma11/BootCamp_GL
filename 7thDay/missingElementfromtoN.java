import java.util.*;

//  missing element between 1 to n.


public class missingElementfromtoN {
    public static int findMissing(int arr1[]) {
        // code here
        int n = arr1.length;
        int res =0, res2=0;
        for(int i=0;i<n;i++){
            res2=res2^arr1[i];
            res= res ^ i+1;
        }
        res = res ^ n+1;

        return (res ^ res2);
        
    }
    public static void main(String args[]){
        int arr1[] = {1,3,4,5};
        int result = findMissing(arr1);
        System.out.println(result);
    }
}
