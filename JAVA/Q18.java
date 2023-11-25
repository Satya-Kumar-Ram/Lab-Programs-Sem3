import java.util.Scanner;
public class Q18{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        String name, revStr = ""; 
        System.out.print("Enter your string: ");
        name = s.nextLine();
        int strLength = name.length();

        for(int i=(strLength-1); i>=0; --i){
            revStr = revStr + name.charAt(i);
        }
        
        if(name.toLowerCase().equals(revStr.toLowerCase())){
            System.out.print(name + "is a palindrome string");
        }
        else{
            System.out.print(name + "is not a palindrome string");

        }
    }
}
