import java.util.Scanner;
import  java.lang.String;
import static java.lang.Integer.toHexString;
import static java.lang.Integer.parseInt;

public class Main {

	public static void main(String[] args) {
		int Value;
		Scanner input = new Scanner(System.in);
		String s;
		while(true){
			s = input.nextLine();
			if(s.charAt(0)=='-')break;
			if(s.charAt(0)=='0'&&s.charAt(1)=='x'){
				s = s.substring(2);
				System.out.println(parseInt(s,16));
			}
			else{
				Value = parseInt(s);
				System.out.println("0x"+toHexString(Value).toUpperCase());
			}
		}
	}
}
