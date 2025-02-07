import java.util.*;

public class XORnumLTOR {
    
    public static int findXOR(int n){
        int num = n%4;
        if(num==0){
            return n;
        }
        else if(num==1){
            return 1;
        }
        else if(num==2){
            return n+1;
        }
        else if(num==3){
            return 0;
        }
        return 0;
    }


    public static int findLtoR(int l, int r){

        return (findXOR(l-1) ^ findXOR(r));
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        int l= sc.nextInt();
        int r=sc.nextInt();
        int x = findLtoR(l,r);
        System.out.println("XOR of l to r is : "+ x);
    }
}
