import java.util.*;

public class PrintUnique {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        HashSet<Character> st = new HashSet<>();
        for (int i = 0; i < str.length(); i++) {
            if (st.contains(str.charAt(i)))
                continue;
            st.add(str.charAt(i));
            System.out.print(str.charAt(i));
        }
        sc.close();
    }
}
