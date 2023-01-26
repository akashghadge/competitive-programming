import java.util.*;

public class CountAlpha {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        HashMap<Character, Integer> h = new HashMap<>();
        h.put('a', 1);
        h.put('e', 1);
        h.put('i', 1);
        h.put('o', 1);
        h.put('u', 1);
        int cn = 0;
        for (int i = 0; i < str.length(); i++) {
            if (h.containsKey(str.charAt(i))) {
                cn++;
            }
        }
        System.out.println("Vowels count - " + cn);
        System.out.println("Consonants count - " + (str.length() - cn));
        sc.close();
    }
}
