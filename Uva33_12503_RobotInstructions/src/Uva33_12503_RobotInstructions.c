/*
 ============================================================================
 Name        : Uva33_12503_RobotInstructions.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100], sa[100];
	int ptr, flag, n, i, v, T;

	scanf("%d", &T);

	while(T--){

	scanf("%d", &n);
	ptr = 0;
	for (i = 0; i<n; i++){
		scanf("%s",str);
		if(strcmp(str,"LEFT")==0){
			ptr--;
			flag = 0;
		}
		else if(strcmp(str,"RIGHT")==0){
			ptr++;
			flag = 1;
		}
		else{
			scanf("%s %d",str, &v);

			if (flag == 0){
				sa[i] = v;
				ptr--;
			}
			else{
				sa[i] = v;
				ptr++;
			}
		}
	}
	printf("%d", ptr);
	}
}
