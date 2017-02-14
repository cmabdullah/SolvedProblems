/*
 ============================================================================
 Name        : UVA5_p12015.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 http://stackoverflow.com/questions/22906049/how-to-input-multiple-strings-followed-by-newline
 ============================================================================
 */

#include<stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX_STRING_SIZE 1024
int main(){
    char** linux_destro ;
    int i;
    linux_destro = malloc(5 * sizeof(char*));
    for (i = 0; i < 5; i++) {
    	linux_destro[i] = malloc((MAX_STRING_SIZE + 1) * sizeof(char));
        memset(	linux_destro[i], 0, MAX_STRING_SIZE + 1);
    }
    for (i = 0; i<5;i++){
    	scanf("%s",linux_destro[i]);
    }

    for ( i =0 ;i<5; i++){
        printf("%s\n", linux_destro[i]);
    }


    for (i = 0; i < 5; i++)
        free(linux_destro[i]);
    free(linux_destro);

    return 0;

}
