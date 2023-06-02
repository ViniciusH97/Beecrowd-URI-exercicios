package Java;

import java.util.Scanner;

public class ExtremamenteBásico {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int n, i = 0, t=0;
        while (i != 2) {
            n = ler.nextInt();
            t += n;
            i++;
        }
        System.out.println("X = " + t);
        ler.close();
    }
}
