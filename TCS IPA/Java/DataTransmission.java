import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;

public class DataTransmission {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String inp = sc.nextLine();
        String[] nums = inp.split(" ");

        int n = 10000;
        int[] p = new int[n];
        for (int i = 0; i < p.length; i++) {
            p[i] = 1;
        }
        p[0] = 0;
        p[1] = 0;
        for (int i = 2; i < n; i++) {
            if (p[i] == 1) {
                for (int j = i * 2; j < n; j += i) {
                    p[j] = 0;
                }
            }
        }
        ArrayList<Integer> ans = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            Integer curr = Integer.parseInt(nums[i]);
            if (p[curr] == 1) {
                ans.add(curr);
            }
        }
        Collections.sort(ans);
        System.out.println(ans.size() + ans.get(ans.size() - 2));
        sc.close();
    }
}
