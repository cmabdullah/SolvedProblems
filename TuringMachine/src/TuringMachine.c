/*
 ============================================================================
 Name        : TuringMachine.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#include <string.h>
char input[100];
void stateA();
void stateB();
void reject();
void accept();
int state,jo=0,j1=0, i,len;
int main(){
	scanf("%s",&input);
	len = strlen(input);
    stateA();
    accept();
}
void stateA(){
	state = 0;
	if (input[0]!= '1'){
		for (i = 0; i<len ;i++){
			if (input[i] == '0' && state == 0){
				state = 1;
				input[i] = 'x';
				jo++;
				stateB();
				break;
			}
		}
	}
}
void stateB(){
	for (i = 0; i<len ;i++){

		if (input[i] == '1' && state == 1){
			state = 0;
			input[i] = 'y';
			j1++;
			stateA();
			break;
		}
	}
		//printf("%s\n",input);
}
void accept(){
	(jo==j1 && (jo+j1) == len) ? printf("Accept\n") :reject();
}
void reject(){
	printf("Reject\n");
}
