/*
 ============================================================================
 Name        : UVA25_10963The.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/**
 10963 - The Swallowing Ground
 http://uva.onlinejudge.org/external/109/10963.html
Summary
Given a set of locations for two contours (an upper and a lower one),
this problems asks us if we can transform one (only vertically)
so that it matches the second one.

Explanation
The only way the result is true is the spacing is the same between the
two set of points consistently. Which is a complicated way of asking if all the
\Delta y's are the same.
 */
#include <stdio.h>
int main(){
    int i,n,a,b,T,judge,temp;
    scanf("%d",&T);
    while(T--){
		scanf("%d",&n);
		scanf("%d%d",&a,&b);
		judge=0;
		temp=(a-b);
		for(i=1;i<n;i++){
			scanf("%d%d",&a,&b);
			if(temp!= (a-b))
			judge=1;
		}
		if(judge==1)
		printf("no\n");
		else
		printf("yes\n");
		if(T)
			printf("\n");
    }
    return 0;
}
