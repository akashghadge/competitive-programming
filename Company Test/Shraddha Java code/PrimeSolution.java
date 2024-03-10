import java.util.Scanner;

class Prime {
    // Method to check if a number is prime
    public static boolean checkPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}

public class PrimeSolution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Reading five integers
        for (int i = 0; i < 5; i++) {
            int num = scanner.nextInt();

            // Creating an instance of the Prime class
            Prime prime = new Prime();
            for (int j = 1; j <= num; j++) {
                if (prime.checkPrime(j)) {
                    System.out.print(j + " ");
                }
            }
            System.out.println("");
        }

        scanner.close();
    }
}
