import java.util.Scanner;

public class Q9{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the first range: ");
        int num1 = s.nextInt();
        System.out.print("Enter the last range: ");
        int num2 = s.nextInt();
        System.out.print("Perfect Numbers are: ");
        for(int i=num1; i<=num2; i++){
            int n = i;
            int sum = 0,fact = 1;  
            while(fact < n){
                if(n % fact == 0){
                    sum += fact;
                }
                fact++; 
            }
            if(sum == i){
                System.out.print(i+" ");
            }
        }

    }
}