import java.util.*;
public class powerofTwo{
    public static boolean power(int n){
        if(n==0){
            return false;
        }
        return ((n & (n-1)) == 0);


    }
    public static void main(String args[]){
        Scanner sc= new Scanner (System.in);
        int n=sc.nextInt();
        boolean res = power(n);
        if(res==false){
            System.out.println(n+" is not a power of 2");
        }
        else{
            System.out.println(n+" is a power of 2");
        }
    }
}