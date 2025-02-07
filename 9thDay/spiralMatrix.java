import java.util.*;


public class spiralMatrix {
    public static void spiralMatrixx(int arr[][],int r, int c) {
        int top=0;
        int right = c-1;
        int bottom = r-1;
        int left = 0;
        System.out.print("Spiral matrix is :\n");
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                System.out.print(arr[top][i]+" ");
            }
            // System.out.print("\n");
            top++;
            for(int i=top;i<=bottom;i++){
                System.out.print(arr[i][right]+" ");
            }
            // System.out.print("\n");

            right--;
            if(top<=bottom){
               for(int i=right;i>=left;i--){
                System.out.print(arr[bottom][i]+" ");
            }
            bottom--;
            // System.out.print("\n");
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                System.out.print(arr[i][left]+" ");
            }
            left++;
            }

        }
    }
    
    public static void main(String[] args) {
        Scanner sc= new Scanner (System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        int[][] arr = new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        System.out.println("Original Matrix:");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                System.out.print(arr[i][j]+ " ");
            }
            System.out.print("\n");

        }

        spiralMatrixx(arr,r,c);
    }
}
