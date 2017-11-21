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

/***

#include<stdio.h>
void stateA();
void stateB();
void stateC();
void stateD();
void stateE();
void Reject();
char input[] = "10001111";
int state1 = 0,state2 = 0,state3 = 0,state4 = 0,state5 = 0, state6 = 0,head = 0, i,headB = 4;
int main(){
    printf("%s",input[8]);
    if (input[head] != '1'){
        state1 = 1;
        stateA();
    }
    else{
        state6 = 1;
    }


    void Reject();
}
void stateA(){
    if (state1 == 1){
        printf("staate1\n");
        for(i = 0;i<4;i++){
            if(input[head] == '0'){
                input[head] = 'x';
                state1 = 0;
                state2 = 1;
                head++;
                printf("state 1 head %d\n",head);
                stateB();//moveright
                break;
            }
            if (input[head] == 'y'){
                printf("State 1 HEAD %d and inputHEAD %c\n",head,input[head]);
                state1 = 0; //move left
                state2 = 0;
                state3 = 0;
                state4 = 1;
                stateD();
                break;
            }
        }


    }
}
void stateB(){
    printf("%s\n",input);
    if (state2 == 1)
    for(i = 4; i<8;i++){
            //printf(" i = : %d state2 : %d    state3 : %d input %s\n",i,state2,state3, input);
        if(state2 == 1 && (input[i] == '0' || input[i] == 'y')){
            state2 = 1;
        }
        else if(state2 == 1 && input[i] == '1'){
            state2 = 0;
            state1 = 1;
            input[i] = 'y';
            stateA();//move left5
            break;
        }
    }
            if (input[--head] == 'x'){
            state1 = 0;
            state2 = 0;
            state3 = 1;
            printf("Head B %d\n",head);
            stateC(); // move right

        }
        printf(" i = : %d, state1 : %d state2 : %d    state3 : %d input %s\n",i,state1,state2,state3, input);
}


void stateC(){
    if (state3 == 1){
        for (i = 0 ; i<8; i++){
            if (state3 == 1 && (input[i] == '0' || input[i]== 'y')){
                state1 = 1; //move left
                state2 = 0;
                state3 = 0;
                stateA();
            }
        }
        printf("State C  state1 : %d state2 : %d    state3 : %d input %s\n",state1,state2,state3, input);
    }
}

void stateD(){
//printf("this is D\n");
    if (state4 == 1){
        for (i = 4 ; i<=8;i++){
            if (input[i] == 'y')
                state4 = 1;
            else
                state4 = 0;
                state5 = 1;
                stateE();
                break;

        }
    }
    printf("this is D  State 4 : %d State 5 : %d state 6 : %d\n", state4,state5,state6);
}

void stateE(){
    if (state5 == 1 && state6!=1)
        printf("Accept\n");
}
void Reject(){
        if (state6==1)
        printf("Reject\n");
}




**/

#include <stdio.h>
char inp[20] = "000111";
int state = 0, head = 0;
int main(){
    while(1){
        if (state == 0 && inp[head] == '0'){
            inp[head] = 'x';
            state = 1; //move right
            head++;
            printf("input : %s head : %d\n",inp,head);
        }
        else if (state == 1 && (inp[head] == '0' || inp[head]== 'y')){
            //printf("Show\n");
            state = 1;
            //printf("\n\nState : %d",state);
            while(inp[head] != '1'){
                head++;
            }
            printf("\n\nHEAD : %d",head);

        }
        else if (state == 1 && inp[head] == '1'){

            inp[head] = 'y';
            printf("\n\last Input  : %s",inp);
            state = 2;
            head--;
            printf("\n\n Current HEAD : %d",head);
        }
        else if (state == 2 && (inp[head]=='0' || inp[head]=='0')){
            while(inp[head] != 'x'){
                head--;//move left
                state = 2;
                printf("\n\n State 2 HEAD : %d",head);
            }
        }
        else if (state == 2 && inp[head]=='x'){
            head++;
            state = 0;

            printf("\n\n State 2 HEAD Update : %d, inp %s",head, inp);
        }
        else
            break;
    }
}
