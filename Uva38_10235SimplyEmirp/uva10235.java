package uva10235;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.Vector;
 
class Uva10235{
        public static boolean isPrime(String n){
        boolean flag=true;
        boolean a  = new BigInteger(n).isProbablePrime(10);
        if (a != true){
            flag=false;
            return flag;
        }
        return flag;
    }
    public static void main(String args[]){
        Scanner x=new Scanner(System.in);
        while(x.hasNext()){
            String n=x.next();
            String r  = new StringBuilder(n).reverse().toString();
            if(isPrime(n) && isPrime(r) && !n.equals(r))System.out.println(n+" is emirp.");
            else if(isPrime(n))System.out.println(n+" is prime.");
            else System.out.println(n+" is not prime.");
        }
    }
}
/**
 package cm;
import java.math.BigInteger;
import java.util.Scanner;
public class Cm {
    public static void main(String[] args) {
        Scanner x=new Scanner(System.in);
        while ( x.hasNext() ) {
            String u = x.next();
            boolean a  = new BigInteger(u).isProbablePrime(10);
            String v  = new StringBuilder(u).reverse().toString();
            boolean b  = new BigInteger(v).isProbablePrime(10);
            if (a == true &&  b== true && !u.equals(v)) System.out.println(u+" is emirp.");
            else if(a == true) System.out.println(u+" is prime.");
            else System.out.println(u+" not prime.");
        }
    }
}
 **/
