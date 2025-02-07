import java.util.*;
public class setBits{

    public static void kthBit(int n, int k)
    {
        int x=1;
        int l=n>>(k-1);
        if((l & x) == 1){
            System.out.print("kth bit is set");
        }
        else{
            System.out.println("Kth bit is unset");
        }
    }
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int n=sc.nextInt();
        int k=2;
        kthBit(n,k);
    }

}
