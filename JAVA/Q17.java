import java.util.Scanner;
public class Q17{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = s.nextInt();
        int [] a = new int[size];
        System.out.println("Enter the elements in the array:");
        for(int i=0; i<a.length; i++){
            a[i] = s.nextInt();
        }
        int sum=1;
        for(int j=0; j<a.length; j++){
            sum = sum * a[j];
        }
        System.out.print("The total multiplication is: "+ sum);
    }
}