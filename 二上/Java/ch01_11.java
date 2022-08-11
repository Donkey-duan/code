public class ch01_11 {
    public static void main(String[] arg) {
        double year = 60 * 60 * 24 * 365.0;
        System.out.println(312032486 + (year / 7 * 5) - (year / 13 * 5) + (year / 45 * 5));
    }
}
