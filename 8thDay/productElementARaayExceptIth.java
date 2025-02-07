import java.util.*;


public class productElementARaayExceptIth {
    public static void productArray(int arr[], int temp[]){
        temp[0]=arr[0];
        for(int i=1;i<arr.length;i++){
            temp[i]=temp[i-1]*arr[i];
        }
        for(int i=0;i<arr.length;i++){
            System.out.print(temp[i]+ " "  );
        }
        System.out.print("\n");

        int prod=1;
        for(int i=arr.length-1;i>0;i--){
            temp[i]=temp[i-1]*prod;
            prod=prod*arr[i];
        }
        temp[0]=prod;

    }
    public static void main(String args[]){
        Scanner sc= new Scanner (System.in);
        int arr[]=new int[4];
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        int temp[]=new int[arr.length];
        productArray(arr,temp);
        for(int i=0;i<temp.length;i++){
            System.out.print(temp[i] + " ");
        }

    }
}
