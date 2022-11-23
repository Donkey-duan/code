import java.util.Scanner;

public class Homework4 {
    public static void main(String[] arg) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a decimal value (0 to 15): ");
        int num = in.nextInt();
        if(num <= 15 && num >= 0){
            System.out.println("The hex value is " + Integer.toHexString(num));
        }
        else{
            System.out.println(num + " is an invalid input");
        }
    }
}
