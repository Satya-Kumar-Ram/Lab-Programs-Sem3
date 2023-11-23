import java.util.Scanner;

public class Q1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Press 1 to convert Farenheit to Celsius\nPress 2 to convert Celsius to Farenheit\nEnter your choice: ");
        int choice = sc.nextInt(); 
        switch(choice){
        case 1:
            System.out.print("Enter the temperature in Farenheit :");
            float Far = sc.nextFloat();
            float Cel = (Far-32)*5/9;  //Formula of Celsius
            System.out.print("The Celsius is: "+Cel+"°");
            break;
        case 2:
            System.out.print("Enter the temperature in Celsius: ");
            float cel = sc.nextFloat();
            float far = ((cel*9/5))+32;  //Formula of Farenheit
            System.out.print("The Farenheit is: "+far+"°");
            break;
        }
    }
}