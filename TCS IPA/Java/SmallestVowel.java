import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;

public class SmallestVowel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        HashMap<Character, Integer> st = new HashMap<>();
        st.put('a', 0);
        st.put('e', 4);
        st.put('i', 5);
        st.put('o', 12);
        st.put('u', 18);
        int mn = 25;
        for (int i = 0; i < str.length(); i++) {
            if (st.containsKey(str.charAt(i))) {
                mn = Math.min(mn, st.get(str.charAt(i)));
            }
        }
        System.out.println((char) ('a' + mn));
        sc.close();
    }
}
