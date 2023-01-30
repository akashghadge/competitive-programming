import java.util.*;

public class CollectionPractice {
    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        st.push(1);
        System.out.println(st.peek());
        st.pop();
        Queue<Integer> q = new PriorityQueue<>();
        q.add(2);
        q.add(1);
        System.out.println(q.peek());
        q.remove();
    }
}