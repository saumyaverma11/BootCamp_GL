import java.util.*;

public class palindrome {

    public static Boolean reverse(String str){
        int low=0;
        int high=str.length()-1;
        while(low<=high){
            if(str.charAt(low)!=str.charAt(high-low)){
                return false;
            }
            low++;
        }
        return true;
        }
    
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str = sc.nextLine();
        boolean x = reverse(str);
        if(x==true){
            System.out.println("The string is a palindrome");
        }
        else{
            System.out.println("The string is not a palindrome");
        }
    }
}
