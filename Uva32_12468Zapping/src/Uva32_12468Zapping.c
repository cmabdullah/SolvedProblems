/*
 ============================================================================
 Name        : Uva32_12468Zapping.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/**
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a,b,c;
	scanf("%d%d",&a,&b);

	if (a<b){
		c = b-a;
	printf("%d", c);
	}
	//a= 80
	//b= 10
	//99-80 +10
	else{
		c = 100-a+b;
		printf("%d", c);
	}

}
**/

#include <stdio.h>
#include <math.h>
int main(void)
{
    int T=200,a,b;
    while (T--)
    {
        scanf("%d%d",&a,&b);
        if (a == -1 && b == -1)
        	break;
        a = abs(a-b);
       // printf("%d\n",a);
        if (a>50) a=100-a;
        printf("%d\n",a);
    }
    return 0;
}
