import java.util.*;
public class snakeMatrix{
    public static void snake(int arr[][]){
        int n = arr.length;
        int m = arr[0].length;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<m;j++){
                    System.out.print(arr[i][j]+" ");
            }
        }
            else{
               for(int j=m-1;j>=0;j--){
                System.out.print(arr[i][j]+" ");
               }
            }
        }

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         System.out.print()
        //     }
        // }

        
    }
public static void main(String args[]){
    int[][] n = new int [][]{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    snake(n);

}
}