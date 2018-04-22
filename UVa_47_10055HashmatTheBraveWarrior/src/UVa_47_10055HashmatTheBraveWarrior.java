import java.util.Scanner;

public class UVa_47_10055HashmatTheBraveWarrior {
	public static void main(String[] args) {
		Scanner input=new Scanner (System.in);
		while(input.hasNext()){
			long a=input.nextLong();
			long b=input.nextLong();
			long asubb,bsuba;
			asubb=  a-b;
			bsuba = b-a;
			if(a>b)
				System.out.println(asubb);
			else
				System.out.println(bsuba);

		}
	}
}
