/*
 ============================================================================
 Name        : Pointer.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================


   +
  / \
 2   *
    / \
    3  4
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	    float  a,b,c,  *p,*q,*r ,mul, *mres, total, *totalsum;
	    a = 2;
	    p = &a;//pass address
	    // |n|2|n
	    //printf("Address of p : %x address of a : %x value : %x\n",&p , p , *p);
	    printf("Address of p \t\t: %x \n",&p );
	    b = 3;
	    q = &b;
	    printf("Address of q \t\t: %x \n",&q );
	    c = 4;
	    r= &c;
	    printf("Address of r \t\t: %x \n",&r );
	    mul = (*q )* (*r) ;
	    mres = &mul;
	    printf("Address of mres \t\t: %x \n",&mres);
	    total = *mres + *p ;
	    totalsum = &total;
	    printf("Address of totalsum \t: %x \n",&totalsum);
	    printf("address of mul \t\t: %x \nvalue of mres \t\t: %f \n",mul,mres);
	    printf("address of total \t: %x \nvalue of totalsum \t: %f \n",total, totalsum);
}
