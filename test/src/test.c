/*
 ============================================================================
 Name        : ArmstrongNumber.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Following program printing all Armstrong number except 153.but //why
// i can not fix it.needed help
#include<stdio.h>
#include<math.h>
int main(){
	int n=1,number,count,sum ;
		while(n<10000){
		number=n ;
		count=0;
		sum=0 ;
			while(number){ // finding the length of the number
			number/=10 ;
			count++;// count is for the power
			}
		number=n ;
			while(number){
			sum=sum+pow((number%10),count);
			number=number/10 ;
			}
		if(sum==n) printf("%d \n",n) ;
		n++ ;
		}
	return 0;
}
