import java.util.Scanner;

public class Homework3 {
    public static void main(String[] arg) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char alpha = in.next().charAt(0);
        int change = (int)alpha;
        System.out.println("The Unicode for the character "+ alpha + " is "+ change);
    }
}
