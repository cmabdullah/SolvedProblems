/*
 ============================================================================
 Name        : TOCAssignment1.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#define EOS '\0'
char inp, input[100];
int i=0, state=1;
int main(){
    scanf("%s",input);
	inp=input[i];
    while(inp!=EOS){
         if(state==1 && inp=='a'){
        	 state=2;
        }
         else if(state==2){
        	 	 if (inp=='b'){
        	 		state=2;
        	 	 }
        	 	 else if (inp=='c'){
        	 		state=3;
        	 	 }
         }
        else if(state==3 && inp=='b'){
        		state=3;
        }
        else{
        		state=4;
            break;
        }
        i++;
    	inp=input[i];
    }
    if(state==4)
    		printf("Rejected\n");
    else
    		printf("Accepted\n");
    return 0;
}
