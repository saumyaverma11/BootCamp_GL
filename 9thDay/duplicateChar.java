import java.util.*;

public class duplicateChar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = new String();
        System.out.println("Enter a string");
        str = sc.nextLine();
        for(int i=0;i<str.length()-1;i++){
            for(int j=i+1;j<str.length();j++){
                if(str.charAt(i)==str.charAt(j)){
                    System.out.println(str.charAt(i)+" is duplicate");
                    }

            }
        }
        System.out.print("No char is duplicate");
    }
}
