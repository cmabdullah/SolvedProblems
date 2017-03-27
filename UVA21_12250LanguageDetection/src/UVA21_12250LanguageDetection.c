/*
 ============================================================================
 Name        : UVA21_12250LanguageDetection.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
	int  i;
	//char English[100]="HELLO";
//	char Spanish[100]="HOLA";
//	char German[100]="HALLO";
//	char French[100]="BONJOUR";
//	char Italian[100]="CIAO";
//	char Russian[100]="ZDRAVSTVUJTE";
	char U[100];
	for(i=1;i!=0;i++){
		scanf("%s",U);
		if(U[0]=='#')
		break;
		else if(strcmp(U,"HELLO")==0){
		printf("Case %d: ENGLISH\n",i);
		}
		else if(strcmp(U,"HOLA")==0){
		printf("Case %d: SPANISH\n",i);
		}
		else if(strcmp(U,"HALLO")==0){
		printf("Case %d: GERMAN\n",i);
		}
		else if(strcmp(U,"BONJOUR")==0){
		printf("Case %d: FRENCH\n",i);
		}
		else if(strcmp(U,"CIAO")==0){
		printf("Case %d: ITALIAN\n",i);
		}
		else if(strcmp(U,"ZDRAVSTVUJTE")==0){
		printf("Case %d: RUSSIAN\n",i);
		}
		else
		printf("Case %d: UNKNOWN\n",i);
	}
	return 0;
}
