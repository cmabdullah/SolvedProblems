import java.math.BigInteger;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		String input;
		final BigInteger eleven = new BigInteger("11");
		while (s.hasNextLine()){
			input = s.nextLine();
			BigInteger X = new BigInteger(input);
			if (X.equals(BigInteger.ZERO))
				break;

			if (X.mod(eleven).equals(BigInteger.ZERO))
				System.out.println(input +" is a multiple of 11." );
			else
				System.out.println(input +" is not a multiple of 11.");
		}
	}
}
