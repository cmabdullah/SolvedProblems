/*
 ============================================================================
 Name        :
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	char song[100][100]= { "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
	char val[100][100];
	int n,i,key, ptr = 0, count = 0;
	scanf("%d", &n);
	for (i = 0; i<n ; i++){
		scanf("%s",&val[i]);
	}
	if (n>10){
		key = (int)ceil(n/16)+1;
	}
	else{
		key = 1;
	}
	for (i = 0; i<16*key;i++){
		if (count == n)
			count = 0;
		if (ptr == 16)
			ptr = 0;
		printf("%s: %s\n",val[count],song[ptr] );
		ptr++;
		count++;
	}
	return 0;
}
