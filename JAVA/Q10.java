import java.util.Scanner;

public class Q10{
    int binarySearch(int arr[], int key){
       int low = 0, high = arr.length-1;
       while(low <= high){
            int mid = ((low+high)/2);
            if(arr[mid]==key){
                System.out.print("Your element has found at index: ");
                return mid;
            }
            else if(key > arr[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
       }
        System.out.print("Your element has not found");
        return -1;
    }
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        //------>Linear Search Approach<--------
        /*
         int [] arr = new int[5];
         for(int i=0; i<arr.length; i++){
            System.out.print("Enter the number in " +i+ "index: ");
            arr[i] = s.nextInt();
         }
        System.out.print("Which element you want to search?: ");
        int want = s.nextInt();
        for(int j=0; j<arr.length; j++){
            if(want==arr[j]){
                System.out.print("Your element is found at "+j+" index");
                return;
            }
        }
        System.out.print("Your element is not found");
        */

        //------>Binary Search Approach<--------

        int [] arr = new int[5];
        for(int i=0; i<arr.length; i++){
            System.out.print("Enter your number at "+i+" index: ");
            arr[i] = s.nextInt();
       }
        System.out.print("Which element you want to search?: ");
        int key = s.nextInt();
        Q10 b = new Q10();
        System.out.print(b.binarySearch(arr,key));
      
    }
}
