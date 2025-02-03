import java.util.*;

public class common3sortedNationalDutch {

    public static void commonElement(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
        int i=0,j=0,k=0;
        while(i<n1 && j<n2 && k<n3){
            if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
                System.out.print(arr1[i]+ " ");
                i++;
                j++;
                k++;

            }
            else if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr2[j]<arr3[k]){
                j++;
            }
            else{
                k++;
            }
        }
    }
    public static void main(String args[]){
        int arr1[]={1,2,3,4,5,6,9};
        int arr2[]={2,3,5,8,9};
        int arr3[]={2,3,5,6,9};
        int n1=arr1.length;
        int n2=arr2.length;
        int n3=arr3.length;
        commonElement(arr1,arr2,arr3,n1,n2,n3);


    }
}
