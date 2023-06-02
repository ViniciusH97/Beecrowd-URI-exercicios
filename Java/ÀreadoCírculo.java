package Java;

import java.util.Scanner;

public class ÀreadoCírculo {
    public static void main(String [] args){
        Scanner ler = new Scanner(System.in);
        double n = 3.14159, raio;
        raio = ler.nextDouble();
        double a = n * Math.pow(raio,2);
        String res = String.format("%.4f" , a);
        System.out.println("A="+ res);
        ler.close();
    }
}
