
public class Uva39_573_TheSnail {
/****
 * 
 Day Initial		 Height Distance 	Climbed Height After 	Climbing Height		 After Sliding
		1 				0’					 3’ 						3’					 2’
		2 				2’ 					2.7’ 					4.7’					 3.7’
		3 				3.7’ 				2.4’						 6.1’				 −−
 * */

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double H,U,D,F;
		H = 10;
		U = 2;
		D = 1;
		F = 50;
		
		
		
		double DayInitial = 0,	HeightDistance = 0,ClimbedHeightAfter ;
		double ClimbingHeight	,AfterSliding ;
		
		Uva39_573_TheSnail obj = new Uva39_573_TheSnail(U,F);
		System.out.println(obj.result);
		int i = 1;
		ClimbedHeightAfter = U ;
		ClimbingHeight = U;
		
		
		
			while ( i != 0) {
				DayInitial = i;
				U = U-obj.result;
				
				
				ClimbedHeightAfter = U ;
				
				
				
				AfterSliding = ClimbingHeight - D;
				HeightDistance = AfterSliding;
				
				ClimbingHeight = ClimbedHeightAfter+HeightDistance;
				i++;
				if (ClimbingHeight> H) {
					break ;
				}
				
			}
		
		
		System.out.println(i);

	}
	
	double U,F, result;
	Uva39_573_TheSnail(double U,double F){
		this.U = U;
		this.F = F;
		percentage(U,F);
	}
	double percentage(double i,double j) {
		double v = 100;
		result = (i*j)/v ;
		return result;
	}

}
