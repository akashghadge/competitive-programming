import java.util.*;

public class PlayerRun {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 4;
        BasePlayer[] players = new BasePlayer[n];
        for (int i = 0; i < n; i++) {
            int id = sc.nextInt();
            sc.nextLine();
            String name = sc.next();
            int rank = sc.nextInt();
            sc.nextLine();
            int match = sc.nextInt();
            sc.nextLine();
            int runs = sc.nextInt();
            sc.nextLine();
            players[i] = new BasePlayer(id, name, rank, match, runs);
        }
        int target = sc.nextInt();
        double[] ans = findAvg(players, target);
        for (double curr : ans) {
            if (curr >= 80) {
                System.out.println("Grade A");
            } else if (curr >= 50) {
                System.out.println("Grade B");
            } else {
                System.out.println("Grade C");
            }
        }
        sc.close();
    }

    public static double[] findAvg(BasePlayer[] players, int target) {
        double[] ans = new double[0];
        for (BasePlayer player : players) {
            if (target <= player.match) {
                ans = Arrays.copyOf(ans, ans.length + 1);
                double curr_avg = (double) player.runs / player.match;
                ans[ans.length - 1] = curr_avg;
            }
        }
        return ans;
    }
}

class BasePlayer {
    int id, rank, match, runs;
    String name;

    public BasePlayer(int id, String name, int rank, int match, int runs) {
        this.id = id;
        this.name = name;
        this.rank = rank;
        this.match = match;
        this.runs = runs;
    }
}