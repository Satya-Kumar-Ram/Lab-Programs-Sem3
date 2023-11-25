import java.util.Scanner;
import java.util.Arrays;
public class Q16{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = s.nextInt();
        int [] a = new int[size];
        System.out.println("Enter the elements in an array: ");
        for(int i=0; i<a.length; i++){
            a[i] = s.nextInt();
        }
        Arrays.sort(a);
        int lowest = a[0];
        System.out.print("Lowest element is: "+ lowest);
    }
}