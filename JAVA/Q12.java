import java.util.Scanner;

public class Q12{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        int [] arr = new int[4];
        int neg = 0; 
        int odd=0;
        int count=0;
        int prime=0;
        for(int j=0; j<arr.length; j++){
            arr[j] = s.nextInt();

            if(arr[j] < 0){
                neg++;
            }
            else if(arr[j] % 2 == 0){

            }
            else{
                odd++;
            }
            if(arr[j]<=1){

            }
            else{
                if(arr[j]%j == 0){
                    count++;
                }
                if (count > 1) {
                }
                else {
                prime++;
        }
            }
            
        }
        System.out.println("Negative numbers: "+ neg);
        System.out.println("Odd numbers: "+ odd);
        System.out.println("Prime numbers: "+ prime);
       
    }
}