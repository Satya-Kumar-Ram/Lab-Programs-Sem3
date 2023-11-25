import java.util.Scanner;

public class Q6{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        int num,ld;
        int r=0;
        System.out.print("Enter any number: ");
        num = s.nextInt();
        System.out.print("Reverse number is: ");
        while(num>0){
            ld = num%10;
            System.out.print(ld);
            num = num/10;
        }

    }
}
