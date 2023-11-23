import java.util.Scanner;
public class Q3{
    int factorial(int n){
        if(n==0){
            return 1;
        }
        return (n*factorial(n-1));
    }
    public static void main(String[] args){
        Q3 f = new Q3();
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = s.nextInt();
        int fact = f.factorial(num);
        System.out.print("Your factorial is: "+fact);
    }
}
