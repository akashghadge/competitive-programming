import java.util.*;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		Student[] arr = new Student[4];

		for (int i = 0; i < 4; i++) {
			String name = sc.next();
			int marks = sc.nextInt();

			arr[i] = new Student(name, marks);
		}

		/**
		 * Sorting in ascending order of student marks
		 * 
		 * 
		 * Arrays is a class present in 'java.util.' package
		 * So we need to only 'import java.util.*'
		 */
		Arrays.sort(arr, (student1, student2) -> {
			return student1.marks - student2.marks;
		});

		for (int i = 0; i < arr.length; i++) {
			Student st = arr[i];
			System.out.println(st.name + " " + st.marks);
		}

	}

}

class Student {
	String name;
	int marks;

	public Student(String name, int marks) {
		super();
		this.name = name;
		this.marks = marks;
	}
}
