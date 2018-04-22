import java.io.IOException;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) throws IOException {
		String s;
		int t;
		Scanner x = new Scanner(System.in);
		t = x.nextInt();
		for(int i=1;i<=t;i++){
			s = x.next();
			if(s.equals("1")||s.equals("4")||s.equals("78"))
				System.out.print("+\n");
			else if(s.endsWith("35"))
				System.out.print("-\n");
			else if(s.startsWith("9") && s.endsWith("4"))
				System.out.print("*\n");
			else
				System.out.print("?\n");
		}
	}
}
