import java.util.Scanner;

public class MovieSolution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 4;
        Movie[] movies = new Movie[n];
        for (int i = 0; i < n; i++) {
            movies[i] = new Movie(sc.nextInt(), sc.next(), sc.nextInt(), sc.nextInt());
        }
        int ans1 = findAvg(movies, sc.next());
        Movie ans2 = getMovie(movies, sc.nextInt(), sc.nextInt());
        if (ans1 == 0) {
            System.out.println("No match");
        } else {
            System.out.println(ans1);
        }
        if (ans2 == null)
            System.out.println("no match in budget and rating");
        else
            System.out.println(ans2.id);
        sc.close();
    }

    public static int findAvg(Movie[] movies, String dir) {
        int total = 0;
        int cn = 0;
        for (Movie movie : movies) {
            if (movie.director.equalsIgnoreCase(dir)) {
                total += movie.budget;
                cn++;
            }
        }
        if (cn == 0)
            return 0;
        return total / cn;
    }

    public static Movie getMovie(Movie[] movies, int rating, int budget) {
        Movie ans = null;
        for (Movie movie : movies) {
            if (movie.rating == rating && movie.budget == budget && movie.budget % 3 == 0)
                ans = movie;
        }
        return ans;
    }
}

class Movie {
    int id, rating, budget;
    String director;

    public Movie(int id, String director, int rating, int budget) {
        this.id = id;
        this.director = director;
        this.rating = rating;
        this.budget = budget;
    }
}