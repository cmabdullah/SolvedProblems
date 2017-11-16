/*
 ============================================================================
 Name        : TOCAssignment2.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
char input[100] ;
char stack[100] ;
char r;
int TOS = 0;
void reject();
void state1();
void state2();
void state3();
void state4();
int q1,q2,q3,q4 = 0 ,qr = 0   ,Q2flag      , i,j,k;
int main(){
    //printf("Input is : %s\n", input);
    scanf("%s", input);
    state1();// input $
    state2();// Push operation
    state3();// pop operation
    state4();
}
void state1(){
    //state 1
    if (stack[TOS] == '\0'){
        stack[TOS] = '$';
        TOS++;
        q1 = 1;
    }
  //  printf("Stack condition is : %s\n", stack);
}
void state2(){
    if (q1 == 1){
    for(i = 0; i<10; i++){
        if (input[i] == '#'){
            Q2flag = i;
            q2 = 1;
            break;
        }
        if(input[i]== 'a' || input[i] == 'b'){
        stack[++TOS]= input[i];
        //++TOS;
        }
        r = input[i];
        if (r != 'a' && r != 'b' ){
            qr = 1;
        }
    }
   // printf("State 2 Stack condition is : %s , TOS index %d, Q2flag index %d\n", stack,TOS, Q2flag);
    }
}
void state3(){
    if (q2 == 1){
   // printf("State 3 TOS index %d,\n",TOS-1);
    //printf("input[] : %c\n",input[Q2flag+1]);
        for (i = TOS-1; i>0 ; i--){
            //printf("%d\n",TOS-1);
            Q2flag++;
            if (input[Q2flag] == 'a' ||input[Q2flag] == 'b' ){
          //  printf("State 3 Q2flag %d,\n",Q2flag);
            stack[TOS-1] = '\0';
            TOS--;
            }
            else{
                qr = 1;
            }
        }

    }
    //printf("after pop : stack is :%s\n", stack);
   // printf("Reject status :%d\n", qr);
   // printf("TOS : %d\n", TOS);
}
void state4(){
    if (stack[TOS] == '\0' && qr == 0)
    printf("Accept\n");
    else
        reject();
}
void reject(){
    printf("Reject\n");
}
