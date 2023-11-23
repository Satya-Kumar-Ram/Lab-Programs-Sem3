import java.util.Scanner;
import java.util.Arrays;

public class Q2{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int [] array = new int [3];  
        System.out.print("Enter the first number: ");
        array[0] = s.nextInt();
        System.out.print("Enter the second number: ");
        array[1] = s.nextInt();
        System.out.print("Enter the third number: ");
        array[2] = s.nextInt();
        Arrays.sort(array);
        System.out.print("Your second lowest number is: "+array[1]);
    }
} 