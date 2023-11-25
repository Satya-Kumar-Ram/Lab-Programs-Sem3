import java.util.Scanner;
import java.util.Arrays;

public class Q13{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = s.nextInt();
        int [] a = new int[size];
        System.out.println("Enter the "+size+" elements: ");
        for(int i=0; i<a.length; i++){
            a[i] = s.nextInt();
        }
        //---->Using Array.sort function<-----
        /*
        Arrays.sort(a);
        System.out.print("Elements are: ");
        for(int j=0; j<a.length; j++){
            System.out.println(a[j]);*/
        
        //---->Using Bubble Sort<-----
        for(int i=0; i<a.length; i++){
            for(int j=0; j<a.length-1; j++){
                if(a[j] > a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        System.out.print("Arrays after sorting is: ");
        for(int i=0; i<a.length; i++){
            System.out.print(a[i] + " ");
        }
        
    }
}