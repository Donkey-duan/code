import java.util.Scanner;

public class Homework5 {
    public static void main(String[] arg) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a letter: ");
        char alpha = in.next().charAt(0);
        int num = (int)alpha;
        if((num>=65 && num <=97) || (num>=97 && num<=122)){
            switch(alpha){
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    System.out.println(alpha +" is a vowel");
                    break;
                    default:
                        System.out.println(alpha + " is a consonant");
            }   
        }
        else System.out.println(alpha + " is an invalid input");
    }
}
