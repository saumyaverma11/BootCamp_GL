import java.util.*;

public class flippedAtoB {
    public static int flippedFun(int a, int b){
        int x = a^b;
        int count=0;
        while(x>0){
            x =x&(x-1);
            count++;
        }

        return count;
    }
    public static void main(String args[]){
        int a=10;
        int b=20;
        int res= flippedFun(a,b);
        System.out.println("we want to flipped " + res + " bits to make " + a + " to " + b );


    }
}
