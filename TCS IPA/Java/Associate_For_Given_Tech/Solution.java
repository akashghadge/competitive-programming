import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // get input
        int n = 5;
        Associate[] associates = new Associate[n];
        for (int i = 0; i < n; i++) {
            associates[i] = new Associate(sc.nextInt(), sc.next(), sc.next(), sc.nextInt());
        }
        Associate[] ans = associatesForGivenTech(associates, sc.next());
        if (ans.length == 0) {
            System.out.println("No Match Found");
            return;
        }
        for (Associate a : ans) {
            System.out.println(a.getId());
        }
        sc.close();
    }

    public static Associate[] associatesForGivenTech(Associate[] associates, String techReq) {
        Associate[] ans = new Associate[0];
        techReq = techReq.toLowerCase();
        for (Associate a : associates) {
            String currTech = a.getTech();
            currTech = currTech.toLowerCase();
            if (currTech.equals(techReq) && a.getExp() % 5 == 0) {
                ans = Arrays.copyOf(ans, ans.length + 1);
                ans[ans.length - 1] = a;
            }
        }
        return ans;
    }
}

class Associate {
    public int id;
    public int exp;
    public String name;
    public String tech;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getTech() {
        return tech;
    }

    public void setTech(String tech) {
        this.tech = tech;
    }

    public int getExp() {
        return exp;
    }

    public void setExp(int exp) {
        this.exp = exp;
    }

    public Associate(int id, String name, String tech, int exp) {
        this.id = id;
        this.name = name;
        this.tech = tech;
        this.exp = exp;
    }
}