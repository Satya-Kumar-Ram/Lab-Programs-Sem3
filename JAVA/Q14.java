import java.util.Scanner;

public class Q14{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = s.nextInt();
        int [] a = new int[size];
        System.out.println("Enter the elements in the array: ");
        for(int i=0; i<a.length; i++){
            a[i] = s.nextInt();
        }
        
        System.out.print("Elements after reversing: ");
        for(int i=a.length-1; i>=0; i--){
            System.out.print(a[i] + " ");
        }

    }
}