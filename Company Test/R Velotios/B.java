import java.util.Collection;
import java.util.Collections;
import java.util.ArrayList;
import java.util.HashMap;

class B {

    public static void main(String[] args) {

    }

    public static long Function(int C[], int H[], int N, int K) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int i = 0; i < N; i++) {
            Integer k = (int) (long) H[i];
            Integer v = (int) (long) C[i];
            if (mp.containsKey(H[i])) {
                if (mp.get(k) < v) {
                    mp.put(k, v);
                }
            } else {
                mp.put(k, v);
            }
        }
        if (mp.size() < K)
            return -1;

        ArrayList<Integer> arr;
        mp.forEach((k, v) -> arr.add(v));
        Collections.sort(arr, Collections.reverseOrder());
        long ans = 0;
        for (int i = 0; i < K; i++) {
            ans += arr.get(i);
        }
        return ans;
    }
}