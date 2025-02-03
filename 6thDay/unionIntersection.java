import java.util.*;
public class unionIntersection{
    public static void union(int arr1[], int arr2[], int n1 , int n2){
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(arr1[i]<arr2[j]){
                System.out.print(arr1[i++] + " ");
            }
            else if(arr2[j]<arr1[i]){
                System.out.print(arr2[j++] + " ");
            }
            else{
                System.out.print(arr1[i]+ " ");
                i++;
                j++;
            }
        }
        while(i<n1){
            System.out.print(arr1[i++]+ " ");
        }
        while(j<n2){
            System.out.print(arr2[j++]+ " ");
        }

        System.out.println("\n");
    }

    
    public static void intersection(int arr1[], int arr2[], int n1, int n2){
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr2[j]<arr1[i]){
                j++;
            }
            else{
                System.out.print(arr1[i] + " ");
                i++;
                j++;
            }
        }
    }
    public static void main( String args[]){
        int arr1[]={1,2,3,5,6,7};
        int size1=arr1.length;
        int arr2[]={2,3,5,8,9};
        int size2=arr2.length;
        union(arr1,arr2, size1,size2);
        intersection(arr1,arr2,size1,size2);

    }
}