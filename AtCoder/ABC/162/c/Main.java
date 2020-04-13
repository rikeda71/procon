package c;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        BigInteger sum = BigInteger.ZERO;
        int tmpGcd;
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.next());
        for (int a = 1; a <= N; a++) {
            for (int b = 1; b <= N; b++) {
                for (int c = 1; c <= N; c++) {
                    tmpGcd = gcd(a, b);
                    sum = sum.add(BigInteger.valueOf(gcd(tmpGcd, c)));
                }
            }
        }
        System.out.println(sum);
    }

    public static int gcd(int num1, int num2) {
        if (num2 == 0)
            return num1;
        else
            return gcd(num2, num1 % num2);
    }

}