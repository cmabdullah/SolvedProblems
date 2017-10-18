import java.util.Scanner;

public class Uva39_573_TheSnail {
/****
 * 
 Day Initial		 Height Distance 	Climbed Height After 	Climbing Height		 After Sliding
		1 				0’					 3’ 						3’					 2’
		2 				2’ 					2.7’ 					4.7’					 3.7’
		3 				3.7’ 				2.4’						 6.1’				 −−
 * */

	public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        StringBuffer s = new StringBuffer();
        while(true){
        	double H,U,D,F;
        	double d= 0;
        long days = 0;
            H = obj.nextInt();
            U = obj.nextInt(); 
            	D = obj.nextInt();
            	F = obj.nextInt();
            if(H==0&&U==H&&D==0&&F==0){
            	break;
            	}
            F = (U*F)/100.0;
            while(true){
                days++;

                if(U>=0){
                d+= U;
                }
                if(d>H){
                	break;
                	}
                d-= D;
                if(d<0){
                	break;
                	}
                U-= F;
            }
	        if(d>=0){
	        	s.append("success on day "+days).append('\n');
	        	}
	        else{
	        	s.append("failure on day " + days).append('\n');
	        	}
        }
        System.out.println(s.toString());

	}
}
