import java.util.*;
public class SmallestVowel {
    public static int solve(int[] arr, int k) {
        int n = arr.length;
        if (n <= 1)
            return n;
        List<Integer> temp = new ArrayList<Integer>(n);
        temp.add(0, arr[0]);
        for (int i = 1; i < n; i++) {
            if (arr[i] - temp.get(temp.size() - 1) >= k) {
                temp.add(arr[i]);
            } else {
                int id = Collections.binarySearch(temp, arr[i]);
                if (id >= 0 && id < arr.length) {
                    temp.set(id, arr[i]);
                } else {
                    if (-id - 1 > temp.size() - 1) {
                        if (arr[i] - temp.get(temp.size() - 1) >= k) {
                            temp.add(arr[i]);
                        }
                    } else {
                        if (-id - 1 == 0) {
                            temp.set(-id - 1, arr[i]);
                        } else if (arr[i] - temp.get(-id - 2) >= k) {
                            temp.set(-id - 1, arr[i]);
                        }
                    }
                }
            }
        }
        return temp.size();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(solve(arr, k));
        sc.close();
    }
}
