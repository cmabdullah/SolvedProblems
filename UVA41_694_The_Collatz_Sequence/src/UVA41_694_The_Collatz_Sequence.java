import java.util.Scanner;

public class UVA41_694_The_Collatz_Sequence {
	// Competitive programming 3 page 196
	//Type AD HOC MATHEMATICS PROBLEMS
	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);
		long A,L,x,count,i=1;
		while(true){
			A = obj.nextLong();
			L = obj.nextLong();
			if(A<0&&L<0)
				break;
			count = 1;
			x = A;
			while(x!=1){
				if(x%2 == 0)
					x = x/2;
				else 
					x = 3*x +1;
				if(x >L)break;
				count++;
			}
			System.out.println("Case "+i+": A = "+A+", limit = "+L+", number of terms = "+count);
			i++;
		}
	}

}
