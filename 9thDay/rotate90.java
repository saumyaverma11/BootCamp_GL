import java.util.*;

public class rotate90 {

    public static void rotate90(int arr[][]){
        int n = arr.length;
        int m= arr[0].length;
        int[][] temp = new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp[j][n-i-1] = arr[i][j];
            }
        }
        

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=temp[i][j];
            }
        }

    }
    public static void print(int arr[][]){
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[0].length;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        int[][] matrix = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16}
    };
    rotate90(matrix);
    print(matrix);
}
}
