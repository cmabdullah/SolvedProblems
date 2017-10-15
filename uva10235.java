package uva10235;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Scanner;
public class Uva10235 {
    public static void main(String[] args) throws IOException {
        Scanner x = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String u;
        while ( (u = br.readLine()) != null ) {
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
            u = null;
        }
    }
}
