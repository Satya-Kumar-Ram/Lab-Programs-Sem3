import java.util.Scanner;

public class Q7{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        int num,ld;
        int result=0;
        System.out.print("Enter the number: ");
        num = s.nextInt();
        while(num>0){
            ld = num%10;
            result+=ld;
            num = num/10;
        }
        System.out.print(result);
    }
}