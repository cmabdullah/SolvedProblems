import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class UVa43_10107_WhatIsTheMedian {
	// Competitive programming 3 page 42
	//type LINEAR DS WITH BUILT-IN LIBRARIES
	//https://www.mathsisfun.com/definitions/median.html
	public static void main(String[] args) throws IOException {
		long[] val = new long[10000];
		//BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		InputStreamReader r=new InputStreamReader(System.in);  
		BufferedReader br=new BufferedReader(r);  
		String s;
		int i = 0;
		Arrays.fill(val, Long.MAX_VALUE);
		while ((s=br.readLine())!= null) {
			
			StringTokenizer x = new StringTokenizer(s);
			val[i++] = Long.parseLong(x.nextToken());
			Arrays.sort(val);
			if (i==1) {
				System.out.println(val[0]);
			} else if (i%2==0) {
				System.out.println((val[i/2-1]+val[i/2])/2);
			} else {
				System.out.println(val[i/2]);
			}
		}
	}
}
