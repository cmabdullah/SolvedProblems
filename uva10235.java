package uva10235;

import java.math.BigInteger;
import java.util.Scanner;

public class Uva10235 {

    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        String u = x.next();
        BigInteger  bi1 ;
        bi1 = new BigInteger(u);
        if (bi1.isProbablePrime(1) == true){
          
            String s = String.valueOf(bi1);
            StringBuilder obj1 = new StringBuilder(s);
            String v = obj1.reverse().toString(); //71
            BigInteger b = new BigInteger(v);
            if (b.isProbablePrime(1) == true){
                System.out.println("emirp");
            }
            else{
                System.out.println("prime");
            }
        }
        else{
            System.out.println("Non prime");
        }
    }
}
