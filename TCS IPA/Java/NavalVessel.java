import java.util.*;

public class NavalVessel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 4;
        Val[] vals = new Val[n];
        for (int i = 0; i < n; i++) {
            int id = sc.nextInt();
            sc.nextLine();
            String name = sc.next();
            int plan = sc.nextInt();
            int completed = sc.nextInt();
            sc.nextLine();
            String purpose = sc.next();
            vals[i] = new Val(id, name, plan, completed, purpose);
        }
        int ans1 = findAvg(vals, sc.nextInt());
        sc.nextLine();
        Val ans2 = findVessel(vals, sc.next());
        if (ans1 == 0) {
            System.out.println("no match found in average");
        } else {
            System.out.println(ans1);
        }
        if (ans2 == null) {
            System.out.println("No Naval Vessel is available with the specified purpose");
        } else {
            System.out.println(ans2.name + ans2.classification);
            
        }
        sc.close();
    }

    public static int findAvg(Val[] vals, int per) {
        int total = 0;
        int cn = 0;
        for (Val val : vals) {
            int curr = (val.completed * 100) / val.plan;
            if (curr >= per) {
                total += val.completed;
                cn++;
            }
        }
        if (cn == 0)
            return cn;
        return (total / cn);
    }

    public static Val findVessel(Val[] vals, String purpose) {
        Val ans = null;
        for (Val v : vals) {
            if (v.purpose.equalsIgnoreCase(purpose)) {
                int per = (v.completed * 100) / v.plan;
                String c = "Striver";
                if (per == 100) {
                    c = "Star";
                } else if (per >= 80) {
                    c = "Leader";
                } else if (per >= 55) {
                    c = "Inspirer";
                }
                v.classification = c;
                ans = v;
                break;
            }
        }
        return ans;
    }
}

class Val {
    int id, plan, completed;
    String name, purpose, classification;

    public Val(int id, String name, int plan, int completed, String purpose) {
        this.id = id;
        this.name = name;
        this.plan = plan;
        this.completed = completed;
        this.purpose = purpose;
    }
}