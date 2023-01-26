import java.util.Scanner;

public class PerfectSquare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int val = sc.nextInt();
        double curr = Math.sqrt(val);
        if (Math.ceil(curr) == Math.floor(curr)) {
            System.out.println("TRUE");
        } else {
            System.out.println("FALSE");
        }
    }
}
