import java.util.Scanner;
public class UVA_40_661_Blowing_Fuses {
	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);
		int count = 1;
		for(int k = 1 ;; ++k ){
			int n = obj.nextInt();
			int m = obj.nextInt();
			int c = obj.nextInt();
			if (n== 0 & m==0 & c ==0)
				break;
			int[] arr = new int[n];
			boolean[] sw = new boolean[n];
			int amp=0 , max=0;
			for (int j=0;j<n;j++ ) {
				arr[j]=obj.nextInt();
				sw[j]=false;
			}
			for (int i=0;i<m;i++){
				int temp = obj.nextInt();
				temp=temp-1;
				if (sw[temp]==false){
					sw[temp]=true;
					amp=amp+arr[temp] ;
				}
				else if(sw[temp]==true){
					sw[temp]=false;
					amp=amp-arr[temp] ;
				}
				max = Math.max(max,amp);
			}
			if (c<max)
				System.out.print("Sequence "+count+"\n"+"Fuse was blown."+"\n");
			else 
				System.out.print("Sequence "+count+"\n"+"Fuse was not blown."+"\n"+"Maximal power consumption was "+max+" amperes."+"\n");
			count++;
		}
	}
}
