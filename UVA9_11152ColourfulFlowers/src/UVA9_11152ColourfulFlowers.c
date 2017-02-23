/*
 ============================================================================
 Name        : UVA9_11152ColourfulFlowers.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int main(void) {
	double a,b,c,oc,tr,radious,yellow,r,read,violet,PI, s;
	PI=acos(-1);
	while(scanf("%lf%lf%lf",&a,&b,&c)==3){
		radious=c/2;
		oc=PI*(pow(radious,2));
		s = (a+b+c)/2;

		tr=sqrt(s*(s-a)*(s-b)*(s-c));
		yellow=oc-tr;
		r=(a+b-c)/2 ;//inner circle calculation
		read=PI*r;
		violet=tr-read;
		printf("%.4lf %.4lf %.4lf\n",yellow,violet,read);
	}
	return 0;
}
