import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class MediceSolution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 4;
        Medicine[] meds = new Medicine[n];
        for (int i = 0; i < n; i++) {
            meds[i] = new Medicine(sc.next(), sc.next(), sc.next(), sc.nextInt());
        }
        Medicine[] ans = getPrice(meds, sc.next());
        if (ans == null)
            System.out.println("No match");
        else
            for (Medicine medicine : ans) {
                System.out.println(medicine.price);
            }
        sc.close();
    }

    public static Medicine[] getPrice(Medicine[] meds, String dis) {
        Medicine[] ans = new Medicine[0];
        for (Medicine med : meds) {
            if (med.dis.equalsIgnoreCase(dis)) {
                ans = Arrays.copyOf(ans, ans.length + 1);
                ans[ans.length - 1] = med;
            }
        }
        if (ans.length == 0)
            return null;
        Arrays.sort(ans, new CMP());
        return ans;
    }
}

class Medicine {
    String name, batch, dis;
    int price;

    public Medicine(String name, String batch, String dis, int price) {
        this.name = name;
        this.batch = batch;
        this.dis = dis;
        this.price = price;
    }
}

class CMP implements Comparator<Medicine> {
    @Override
    public int compare(Medicine m1, Medicine m2) {
        return m1.price - m2.price;
    }
}