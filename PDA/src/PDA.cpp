//============================================================================
// Name        : PDA.cpp
// Author      : AbdullahKhan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include<stdio.h>
#define EOS '\0'
int TOS= -1;
char stack[100];
char input[100];
char inp;
int state = 1 , i=0;;
int pop(void);
void push(char x);
int main(){
    scanf("%s",input);
    while(1){
    	inp=input[i];
        if(state==1) {
        	state=2;
            push('$');
        }
        if(state==2) {
			if(inp=='a' || inp=='b'){
				if(inp=='a') {
					state=2;
					push(inp);
				}
				else if(inp=='b') {
					state=2;
					push(inp);
				}
			}
			else if(inp=='#')
				state=3;
				else {
					state=5;
				}
        }
        else  if(state==3) {
            if(inp=='a' && stack[TOS]=='a') {
            		state=3;
                pop();
            }
           else if(inp=='b' && stack[TOS]=='b') {
        	   	   state=3;
                pop();
            }
           else if(inp==EOS && stack[TOS]=='$'){
        	   	   state=4;
            }
           else{
        	   	   state=5;
            }
        }
        else  if(state==4){
        	printf("Accepted\n");
        	break;
        }
        else{
        		state=5;
        		printf("Rejected\n");
            break;
        }
        i++;
    }// whle loop
    return  0;
}
void push(char x) {
	stack[++TOS]= x;
}
int pop() {
    return  stack[TOS--];
}
