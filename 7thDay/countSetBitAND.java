import java.util.*;


public class countSetBitAND{
    public static int count(int n){
        int x=1;
        int count =0;
        int num=n;
        // while(n>0){
        //     if((n&x) == 1){
        //         count++;
        //     };
        //     n= n>>1;
        // }

        while(x<=n){
            if((n&x) !=0 ){
                count++;
            }
            x=x<<1;
        }
        return count;
    }
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        int res  = count(n);
        System.out.println("count of set bit is " + res);
    }
}