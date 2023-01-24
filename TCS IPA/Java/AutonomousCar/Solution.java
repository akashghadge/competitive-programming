package AutonomousCar;

import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        ACar[] cars = new ACar[4];
        for (int i = 0; i < 4; i++) {
            cars[i] = new ACar(scn.nextInt(), scn.next(), scn.nextInt(), scn.nextInt(), scn.next());
        }
        System.out.println(findTestPassedByEnv(cars, scn.next()));
        ACar ans = updateCarGrade(cars, scn.next());
        if (ans == null) {
            System.out.println("no match");
        } else {
            System.out.println(ans.brand + "::" + ans.grade);
        }
        scn.close();
    }

    public static int findTestPassedByEnv(ACar[] cars, String env) {
        int ans = 0;
        for (ACar car : cars) {
            if (car.getEnv().toLowerCase().equals(env.toLowerCase())) {
                ans += car.getTestPassed();
            }
        }
        return ans;
    }

    public static ACar updateCarGrade(ACar[] cars, String brand) {
        ACar ans = null;
        for (ACar car : cars) {
            if (car.getBrand().equalsIgnoreCase(brand)) {
                ans = car;
                String grade = "A1";
                int ratting = (ans.testPassed * 100) / ans.tests;
                if (ratting < 80) {
                    grade = "B2";
                }
                ans.setGrade(grade);
                break;
            }
        }
        return ans;
    }
}

class ACar {
    public int id, tests, testPassed;
    public String brand, env, grade;

    public ACar(int id, String brand, int tests, int testPassed, String env) {
        this.id = id;
        this.brand = brand;
        this.env = env;
        this.tests = tests;
        this.testPassed = testPassed;
    }

    public int getId() {
        return id;
    }

    public int getTestPassed() {
        return testPassed;
    }

    public int getTests() {
        return tests;
    }

    public String getBrand() {
        return brand;
    }

    public String getEnv() {
        return env;
    }

    public String getGrade() {
        return grade;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setEnv(String env) {
        this.env = env;
    }

    public void setTestPassed(int testPassed) {
        this.testPassed = testPassed;
    }

    public void setGrade(String grade) {
        this.grade = grade;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setTests(int tests) {
        this.tests = tests;
    }
}
