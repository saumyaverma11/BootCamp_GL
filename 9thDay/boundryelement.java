
import java.util.*;
public class boundryelement{


public static void boundry(int arr[][]){
    int n= arr.length;
    int m =arr[0].length;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || i==n-1 || j==0 || j==m-1 ){
                System.out.print(arr[i][j]+" ");
            }
        }
        }
    }

    public static void main(String[] args) {
        int[][] arr = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16}
        };

        boundry(arr);
}

}