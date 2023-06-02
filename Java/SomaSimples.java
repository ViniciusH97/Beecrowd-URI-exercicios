package Java;

import java.util.Scanner;

public class SomaSimples {
    public static void main(String[] args){
        Scanner l = new Scanner(System.in);
        int a, b, soma;
        a = l.nextInt(); b = l.nextInt();
        soma = a+b;
        System.out.println("SOMA = " + soma);
        l.close();
    }    
}
