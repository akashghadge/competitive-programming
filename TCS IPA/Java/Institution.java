
/**
 * Institution
 */
import java.util.Scanner;

public class Institution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Inst[] insts = new Inst[4];
        for (int i = 0; i < 4; i++) {
            insts[i] = new Inst(sc.nextInt(), sc.next(), sc.nextInt(), sc.nextInt(), sc.next());
        }
        int ans = findNumClear(insts, sc.next());
        Inst obj = updateGrade(insts, sc.next());
        if (ans == 0) {
            System.out.println("No found number");
        } else {
            System.out.println(ans);
        }
        if (obj == null) {
            System.out.println("null obj");
        } else {
            System.out.println(obj.name + "::" + obj.grade);
        }
        sc.close();
    }

    public static int findNumClear(Inst[] insts, String location) {
        int ans = 0;
        for (Inst inst : insts) {
            if (inst.location.equalsIgnoreCase(location)) {
                ans += inst.noOfCleared;
            }
        }
        return ans;
    }

    public static Inst updateGrade(Inst[] insts, String name) {
        Inst ans = null;
        for (Inst inst : insts) {
            if (inst.name.equalsIgnoreCase(name)) {
                int ratting = (inst.noOfPlaced * 100) / inst.noOfCleared;
                inst.grade = ratting >= 80 ? "A" : "B";
                ans = inst;
            }
        }
        return ans;
    }
}

class Inst {
    int id, noOfCleared, noOfPlaced;
    String name, location, grade;

    public Inst(int id, String name, int noOfPlaced, int noOfCleared, String location) {
        this.id = id;
        this.noOfCleared = noOfCleared;
        this.noOfPlaced = noOfPlaced;
        this.location = location;
        this.name = name;
    }

}