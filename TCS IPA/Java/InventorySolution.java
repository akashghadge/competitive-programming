import java.util.Arrays;
import java.util.Scanner;

import javax.lang.model.util.ElementScanner14;

public class InventorySolution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Inventory[] items = new Inventory[4];
        for (int i = 0; i < 4; i++) {
            items[i] = new Inventory(sc.next(), sc.nextInt(), sc.nextInt(), sc.nextInt());
        }
        Inventory[] ans = replenish(items, sc.nextInt());
        for (Inventory item : ans) {
            if (item.threshold >= 75) {
                System.out.println(item.id + " " + "Critical Filling");
            } else if (item.threshold >= 50) {
                System.out.println(item.id + " " + "Moderate Filling");

            } else {
                System.out.println(item.id + " " + "Non-Critical Filling");

            }
        }
        sc.close();
    }

    public static Inventory[] replenish(Inventory[] items, int limit) {
        Inventory[] ans = new Inventory[0];
        for (Inventory item : items) {
            if (item.threshold <= limit) {
                ans = Arrays.copyOf(ans, ans.length + 1);
                ans[ans.length - 1] = item;
            }
        }
        return ans;
    }

}

class Inventory {
    int maxQ, currQ, threshold;
    String id;

    public Inventory(String id, int maxQ, int currQ, int threshold) {
        this.id = id;
        this.maxQ = maxQ;
        this.currQ = currQ;
        this.threshold = threshold;
    }
}
