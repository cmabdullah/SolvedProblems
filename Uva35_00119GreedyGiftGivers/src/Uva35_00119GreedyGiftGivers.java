
/*
ID: stphung1
LANG: JAVA
TASK: gift1
 */
import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;
public class Uva35_00119GreedyGiftGivers {

	public static void main(String[] args) {
	     Scanner s = new Scanner(System.in);
	        int counter=0;
	        while (true) {
	            int n = 0;
	            try {
	                n = s.nextInt();
	            } catch (Exception e) {
	                break;
	            }
	            s.nextLine();
	            String arr[] = s.nextLine().split(" ");
	            int numArr[] = new int[arr.length];
	            for (int i = 0; i < n; i++) {
	                String m = s.next();
	                int giver = search(arr, m);
	                int money = s.nextInt();
	                int num = s.nextInt();
	                if (num != 0) {
	                    int rem = money % num;
	                    int div = money / num;
	                    numArr[giver] += rem - money;
	                    for (int j = 0; j < num; j++) {
	                        m = s.next();
	                        int receiver = search(arr, m);
	                        numArr[receiver] += div;
	                    }
	                }
	            }
	            if(counter>0)
	                System.out.println();
	            for (int i = 0; i < n; i++) {
	                System.out.println(arr[i] + " " + numArr[i]);
	            }
	            counter++;
	        }
	    }

	    static int search(String[] arr, String m) {
	        for (int i = 0; i < arr.length; i++) {
	            if (arr[i].equals(m)) {
	                return i;
	            }
	        }
	        return -1;
	}

}
