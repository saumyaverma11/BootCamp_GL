import java.util.*;

public class countSetBitBrianKerningamAlgo{

    public static int count(int n){
        int count=0;
    

        while(n>0){                                      
            n= n&(n-1);
            count++;
        }
        return count;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int res = count(n);
        System.out.print(res);
    }
}