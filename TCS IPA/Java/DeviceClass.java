import java.util.Scanner;

public class DeviceClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 4;
        Phone[] phones = new Phone[n];
        for (int i = 0; i < n; i++) {
            phones[i] = new Phone(sc.nextInt(), sc.next(), sc.next(), sc.nextInt());
        }
        int ans1 = findPrice(phones, sc.next());
        if (ans1 == 0) {
            System.out.println("The given Brand is not available");
        } else {
            System.out.println(ans1);
        }
        Phone ans2 = getPhoneByOs(phones, sc.next());
        if (ans2 == null) {
            System.out.println("Os not available");
        } else {
            System.out.println(ans2.id);
        }
        sc.close();
    }

    public static int findPrice(Phone[] phones, String brand) {
        int ans = 0;
        for (Phone phone : phones) {
            if (phone.brand.equalsIgnoreCase(brand)) {
                ans += phone.price;
            }
        }
        return ans;
    }

    public static Phone getPhoneByOs(Phone[] phones, String os) {
        Phone ans = null;
        for (Phone phone : phones) {
            if (phone.os.equalsIgnoreCase(os) && phone.price >= 50000) {
                ans = phone;
                break;
            }
        }
        return ans;
    }
}

class Phone {
    int id, price;
    String os, brand;

    public Phone(int id, String os, String brand, int price) {
        this.id = id;
        this.price = price;
        this.os = os;
        this.brand = brand;
    }

}
