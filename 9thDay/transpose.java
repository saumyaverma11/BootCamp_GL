import java.util.*;

public class transpose {
    public static void transposeMatrixNaive(int arr[][]){
        int n = arr.length;
        int m = arr[0].length;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(arr[j][i]+ " ");
            }
            System.out.println();
        }
    }

    public static void transposeMatrixoptimized(int arr[][]){
        int n = arr.length;
        int m = arr[0].length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    public static void printtranspose(int arr[][]){
        int n = arr.length;
        int m = arr[0].length;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(arr[i][j]+ " ");
                }
                System.out.println();
            }
    }
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int [][] arr = new int[4][4];
        System.out.println("Enter the elements of the matrix");
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                arr[i][j]=sc.nextInt();
            }
        }

        transposeMatrixNaive(arr);
        System.out.println();
        transposeMatrixoptimized(arr);
        printtranspose(arr);
    }
}
