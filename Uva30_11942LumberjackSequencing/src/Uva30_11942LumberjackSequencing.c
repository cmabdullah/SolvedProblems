/*
 ============================================================================
 Name        : Uva30_11942LumberjackSequencing.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int main(){
    int T,n,max,min,maxflag,minflag;
    scanf("%d",&T);
    printf("Lumberjacks:\n");
    while (T--){
        max=100;
        min=0;
        maxflag=1;
        minflag=1;
        int i=10;
        while (i--){
            scanf("%d",&n);
            if (min>n) minflag=0;
            if (max<n) maxflag=0;
            min=n;
            max=n;
        }
        if (maxflag!=minflag)
        		printf("Ordered\n");
        else
        		printf("Unordered\n");
    }
    return 0;
}





/**
#include <stdio.h>
int main(void) {
	int i,hi,lo,T,count, arr[10];
	hi = arr[1];
	lo = arr[0];
//13, 25, 39, 40, 55 ,62 ,68 ,77 ,88 ,95
//88, 62 ,77 ,20 ,40 ,10, 99 ,56 ,45 ,36
	scanf("%d",&T);
	printf("Lumberjacks:\n");
	while(hi--){
	for (i = 0; i<10;i++){
		scanf("%d",&arr[i]);
	}
	if(lo<hi){
		count = 0;
		for (i = 0;i<9;i++){
			if(arr[i]<arr[i+1]){
				count++;
			}
		}
	}
	else if(lo>hi){
		count = 0;
	for (i = 0;i<9;i++){
			if(arr[i]>arr[i+1]){
				count++;
			}
		}
	}
	if (count == 9){
		printf("Ordered\n");
	}
	else
		printf("Unordered\n");
	//printf("%d",hi);
	}
	return 0;
}
**/
