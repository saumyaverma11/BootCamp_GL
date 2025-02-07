import java.util.*;

public class missingElement {
    

        public static int findMissing(int arr1[], int arr2[]) {
            // code here
            int res =0, res2=0;
            for(int i=0;i<arr1.length-1;i++){
                res= res ^ arr1[i];
                res2=res2^arr2[i];
            }
            res= res ^arr1[arr1.length-1];
            return res^res2;
            
        }
    
    public static void main(String args[]){
        int arr1[] = {4,8,1,3,7};
        int arr2[] = {7,4,3,1};
        int result = findMissing(arr1,arr2);
        System.out.println(result);
    }
}
