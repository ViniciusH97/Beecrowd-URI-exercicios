package Java;

import java.util.Scanner;

public class ProdutoSimples {
    public static void main(String[] args){
        Scanner l = new Scanner(System.in);
        int x, y, prod;
        x = l.nextInt(); y = l.nextInt();
        prod = x*y;
        System.out.println("PROD = " + prod);
        l.close();
    }
}
