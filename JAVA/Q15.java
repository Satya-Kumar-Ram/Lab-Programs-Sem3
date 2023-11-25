import java.util.Scanner;
public class Q15{
    public static void Delete(){
        int size,loc,i;
        Scanner r = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        size = r.nextInt();

        int a[] = new int[size];
        System.out.println("Enter Array Elements:");
        for(i=0; i<size; i++){
            a[i] = r.nextInt();
        }
        System.out.print("Enter Array index location: ");
        loc = r.nextInt();
        for(i=loc; i<size-1; i++){
            a[i] = a[i+1];
        }
        size--;
        System.out.print("Array after deletion: ");
        for(i=0; i<size; i++){
            System.out.print(a[i]+" ");
        }
    }
    public static void Insert(){
         int size,loc,item,i;
         Scanner  r = new Scanner(System.in);
         System.out.print("Enter Array size: ");
         size = r.nextInt();

         int[] a = new int[size+1];
         System.out.print("Enter Array Elements: ");
         for(i=0; i<size; i++){
            a[i] = r.nextInt();
         }
         System.out.print("Enter Array index location to insert: ");
         loc = r.nextInt();
         System.out.print("Enter new item: ");
         item = r.nextInt();

         for(i=size; i>loc; i--){
            a[i] = a[i-1];
         }
         a[loc] = item;
         size++;
         for(i=0; i<size; i++){
            System.out.print(a[i]+" ");
         }
    }
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Press 1 to insert data\nPress 2 to delete data\nEnter your choice: ");
        int choice = sc.nextInt();
        Q15 q = new Q15();
        switch(choice)
        {
            case 1:
                q.Insert();
                break;
            case 2:
                q.Delete();
                break;
        }
    }
}