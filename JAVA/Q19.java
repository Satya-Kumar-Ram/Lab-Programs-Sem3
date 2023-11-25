import java.util.Scanner;
public class Q19{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        System.out.print("Enter your String :")
        String str = s.nextLine();
        System.out.println("Your String: "+ str);

        int vow=0, con=0;
        str = str.toLowerCase();
        for(int i=0; i<str.length(); i++){
            
            if(str.charAt(i)=='a' || str.charAt(i)=='e' || str.charAt(i)=='i' || str.charAt(i)=='o' || str.charAt(i)=='u'){
                vow++;
            }
            else if(str.charAt(i)>='a' && str.charAt(i)<='z'){
                con++;
            }
        }
        System.out.println("Total number of Vowel: "+ vow);
        System.out.println("Total number of Consonant: "+ con);
    }
}