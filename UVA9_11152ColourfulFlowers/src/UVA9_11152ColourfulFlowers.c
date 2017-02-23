/*
 ============================================================================
 Name        : UVA9_11152ColourfulFlowers.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<math.h>
int main(void){
	double a,b,c,radious,tr,yellow,ro,ri,read,violet,PI, s;
	PI=acos(-1);
	while(scanf("%lf%lf%lf",&a,&b,&c)==3){
	//	radious=c/2;
		s=(a+b+c)/2;
		tr=sqrt(s*(s-a)*(s-b)*(s-c));
		ro = ((a*b*c)/(4*tr));
		ri = (tr/s);
		yellow=(PI*(pow(ro,2)))-tr;
		read=(PI*pow(ri,2));
		violet=tr-read;
		//r=(a+b-c)/2 ;//inner circle calculation
		//read=PI*r;


		printf("%.4lf %.4lf %.4lf\n",yellow,violet,read);
	}
	return 0;
}
