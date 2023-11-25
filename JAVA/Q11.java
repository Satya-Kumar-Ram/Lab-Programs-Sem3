import java.util.Scanner;

public class Q11{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = s.nextInt();
        int [] arr = new int[size];
        for(int j=0; j<arr.length; j++){
            System.out.print("Enter the "+j+" number: ");
            arr[j] = s.nextInt();
        }
        int sum = 0;
        for(int i=0; i<arr.length; i++){
            sum += arr[i];
        }
        System.out.print("Total sum of array is: "+sum);
    }
}