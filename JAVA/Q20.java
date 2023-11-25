import java.util.Scanner;
public class Q20{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        int last = name.lastIndexOf(' ');
        char ch;
        System.out.print("Abbreviate name is: ");
        System.out.print(name.charAt(0)+".");
        for(int i=0; i<last; i++){
            ch = name.charAt(i);
            if(ch == ' ')
                System.out.print(name.charAt(i+1)+".");
        }
        System.out.print(name.substring(last+1));
    }
}