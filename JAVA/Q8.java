import java.util.Scanner;
public class Q8{
   public static void main(String args[]){
      int num1, num2;
      
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter the first number :");
      num1 = sc.nextInt();
      System.out.println("Enter the second number :");
      num2 = sc.nextInt();

      for (int i = num1; i<num2; i++){    
         int Temp, ld, sum = 0;
         Temp = i;
         while(Temp != 0) {
            ld = Temp % 10;
            sum = sum + (ld * ld * ld);
            Temp = Temp / 10;
         }
         if(sum == i){
            System.out.println(""+i+" is an Armstrong number.");
         }
      }
   }
}