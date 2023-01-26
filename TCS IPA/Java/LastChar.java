import java.util.*;

public class LastChar {
    public static void main(String[] arg) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        for (String word : words) {
            if (word.length() < 1)
                continue;
            char ch = word.charAt(word.length() - 1);
            if ('0' <= ch && ch <= '9') {
                continue;
            }
            System.out.print(ch);
        }
    }
}
