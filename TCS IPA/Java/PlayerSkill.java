import java.util.*;

public class PlayerSkill {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 4;
        Player[] players = new Player[n];
        for (int i = 0; i < n; i++) {
            int id = sc.nextInt();
            sc.nextLine();
            String skill = sc.next();
            String level = sc.next();
            int points = sc.nextInt();
            sc.nextLine();
            players[i] = new Player(id, skill, level, points);
        }
        String skill = sc.next();
        String level = sc.next();
        int ans1 = findPoints(players, skill);
        Player ans2 = getPlayer(players, skill, level);
        if (ans1 == 0) {
            System.out.println("The given Skill is not available");
        } else {
            System.out.println(ans1);
        }
        if (ans2 == null) {
            System.out.println("No player is available with specified level, skill and eligibility points");

        } else {
            System.out.println(ans2.id);

        }
        sc.close();
    }

    public static int findPoints(Player[] players, String skill) {
        int total = 0;
        for (Player player : players) {
            if (player.skill.equalsIgnoreCase(skill)) {
                total += player.points;
            }
        }
        return total;
    }

    public static Player getPlayer(Player[] players, String skill, String level) {
        Player ans = null;
        for (Player p : players) {
            if (p.level.equalsIgnoreCase(level) && p.skill.equalsIgnoreCase(skill) && p.points >= 20) {
                ans = p;
                break;
            }
        }
        return ans;
    }
}

class Player {
    int id, points;
    String skill, level;

    public Player(int id, String skill, String level, int points) {
        this.id = id;
        this.skill = skill;
        this.level = level;
        this.points = points;
    }
}
