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
	char English[100]="HELLO";
	char Spanish[100]="HOLA";
	char German[100]="HALLO";
	char French[100]="BONJOUR";
	char Italian[100]="CIAO";
	char Russian[100]="ZDRAVSTVUJTE";
	char U[100];
	for(i=1;i!=0;i++){
		scanf("%s",U);
		if(U[0]=='#')
		break;
		if(strcmp(U,English)==0){
		printf("Case %d: ENGLISH\n",i);
		}
		if(strcmp(U,Spanish)==0){
		printf("Case %d: SPANISH\n",i);
		}
		if(strcmp(U,German)==0){
		printf("Case %d: GERMAN\n",i);
		}
		if(strcmp(U,French)==0){
		printf("Case %d: FRENCH\n",i);
		}
		if(strcmp(U,Italian)==0){
		printf("Case %d: ITALIAN\n",i);
		}
		if(strcmp(U,Russian)==0){
		printf("Case %d: RUSSIAN\n",i);
		}
	}
	return 0;
}
