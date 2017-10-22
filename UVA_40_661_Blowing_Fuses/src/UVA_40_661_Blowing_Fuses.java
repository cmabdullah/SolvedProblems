import java.io.PrintWriter;
import java.util.Scanner;

public class UVA_40_661_Blowing_Fuses {

	public static void main(String[] args) {
		PrintWriter s = new PrintWriter(System.out);
		Scanner obj = new Scanner(System.in);
		int[] arr = new int[100];
		int[] sw = new int[100];
		int count = 0;
		
		
		while(obj.hasNext() ) {
			
			int n = obj.nextInt();
			int m = obj.nextInt();
			int maxamp = obj.nextInt();
			if (n== 0  & m==0 & maxamp ==0) {
				break;
			}
			
			int amp = 0 , max = 0;
			for (int i = 0; i<n; i++ ) {
				arr[i] = obj.nextInt();
			}
			for (int i = 0; i<n; i++ ) {
				sw[i] = 0;
			}
	
			
			for (int i = 0; i<m; i++ ) {
				
				int temp = obj.nextInt();
				temp = temp-1;
				if (sw[temp] == 0) {
					sw[temp] = 1;
					amp = amp+arr[temp] ;
				}
				else {
					sw[temp] = 0;
					amp = amp-arr[temp] ;
				}
				if (max<amp) {
					max = amp;
				}
				
			}
			for (int i = 0; i<3; i++ ) {
				System.out.println(sw[i]);
				
			}
			
			
			count++;
			
			if (maxamp<max) {
				System.out.println("Sequence "+count);
				System.out.println("Fuse was blown.");
			}
			else {
				System.out.println("Sequence "+count);
				System.out.println("Fuse was not blown.");
				System.out.println("Maximal power consumption was "+max +" amperes");
			}
			n = 0;
			m = 0;
			maxamp = 0;
			
			
		
		}

	}

}
