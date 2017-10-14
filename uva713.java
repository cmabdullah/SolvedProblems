package javaapplication1;
import java.math.BigInteger;
import java.util.Scanner;
public class JavaApplication1 {
//uva 713
    public static void main(String[] args) {
     Scanner x = new Scanner(System.in);
     int n = x.nextInt();
     while(n!=0){
            String t = x.next();
            String u = x.next();
            StringBuilder obj1 = new StringBuilder(t);
            StringBuilder obj2 = new StringBuilder(u);
            String v = obj1.reverse().toString();
            String w = obj2.reverse().toString();
            BigInteger ob1 = new BigInteger(v);
            BigInteger ob2 = new BigInteger(w);
            String r = String.valueOf(ob1.add(ob2)) ;
            StringBuilder obj3 = new StringBuilder(r);
            String result = obj3.reverse().toString();
            System.out.println(Integer.parseInt(result));
            n--;
            return ;
        }
    }
}

