import java.io.PrintWriter;
import java.util.Scanner;

public class Uva39_573_TheSnail {

	public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        PrintWriter s = new PrintWriter(System.out);
        while(obj.hasNext()){
        	double H,U,D,F,decrease, current = 0;
        	boolean first = true;
        int days = 0;
        H = obj.nextInt();
        U = obj.nextInt();
        D = obj.nextInt();
        F = obj.nextInt();
        if(H==0)
        	break;
        decrease = U*((U*F)/100.0) ;

	        while(current <= H && (first || current >= 0)){
	        		days++;
	        		current = current+U;
	           	if(current > H)break;
	           	current = current=D;
	           	U = U-decrease;
	           	U = Math.max(U, 0);
	           	first = false;
	        }
        if (current <= 0)
            s.println("failure on day " + days);
        else
            s.println("success on day " + days);
        s.flush();
        }
        s.close();
        obj.close();
        
	}
}
