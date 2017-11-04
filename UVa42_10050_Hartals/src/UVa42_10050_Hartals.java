import java.util.Scanner;

public class UVa42_10050_Hartals {

	// Competitive programming 3 page 41
	//type DATA STRUCTURES AND LIBRARIES
	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);

		int T = obj.nextInt();// number of case

		for (int case1 = 0; case1 < T; case1++) {

			int N = obj.nextInt(); // number of days N
			int PP = obj.nextInt();//representing the number of political parties in this case.
			int[] hartals = new int[PP];

			for (int i = 0; i < hartals.length; i++) {
				hartals[i] = obj.nextInt();//hartals parameter
			}

			int flag = 0;

			for (int i = 1; i <= N; i++) {
				if ((i % 7) != 6 && (i % 7) != 0) {

					for (int j = 0; j < hartals.length; j++) {
						if (i % hartals[j] == 0) {
							flag++;
							break; 
						}
					}
				}
			}
			System.out.println(flag);
		}
	}
}
