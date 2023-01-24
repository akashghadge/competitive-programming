import java.util.Scanner;

public class CharAtOdd {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        StringBuilder strs = new StringBuilder(str);
        for (int i = 0; i < str.length(); i++) {
            if (i % 2 == 1) {
                System.out.print(str.charAt(i));
            }
        }
        sc.close();
    }
}