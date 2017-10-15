package javaapplication1;
import java.math.BigInteger;
import java.util.Scanner;
public class Main {
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

/***
import java.math.BigInteger;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        int tc;
        BigInteger n1,n2,sum;
        StringBuffer sb;
        Scanner sc = new Scanner(System.in);
        
        tc = sc.nextInt();
        
        while(tc > 0){
            sb = new StringBuffer(sc.next());
            sb = sb.reverse();
            n1 = new BigInteger(sb.toString());
            sb = new StringBuffer(sc.next());
            sb = sb.reverse();
            n2 = new BigInteger(sb.toString());
            
            sum = n1.add(n2);
            sb = new StringBuffer(sum.toString());
            sb = sb.reverse();
            sum = new BigInteger(sb.toString());
            
            System.out.println(sum);
            
            tc--;
        }
    }  
}



////


import java.util.Scanner;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int cases = 0; cases < N; cases++) {
            StringBuilder builder = new StringBuilder(sc.next());
            BigInteger num1 = new BigInteger(builder.reverse().toString());

            builder = new StringBuilder(sc.next());
            BigInteger num2 = new BigInteger(builder.reverse().toString());

            builder = new StringBuilder(num1.add(num2).toString());
            builder = builder.reverse();

            while (builder.charAt(0) == '0' && builder.length() > 1)
                builder.deleteCharAt(0);
            System.out.println(builder.toString());
        }
    }
}

**/