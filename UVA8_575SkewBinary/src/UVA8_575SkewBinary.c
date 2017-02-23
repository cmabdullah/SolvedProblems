/*
 ============================================================================
 Name        : UVA8_575SkewBinary.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 http://sojolewu6.blogspot.com/2016/06/575-skew-binary-solution-hints.html
 ============================================================================
 */

/*****

#include<stdio.h>
#include<math.h>
int main(){
    int i, l, n, sum  = 0, k;
    char c, string[50] ;
    i = 0;
    printf("Input a String :");
    while((c = getchar()) != '\n'){
        string[i] = c;
        i++;
    }
    string[i] = '\0' ;
    l = strlen(string);
   // printf("%s", string);
    k = 0;

    while(string[k])
            {
                n=string[k]-48;
                sum+=n*(pow(2,(l-i))-1);
                k++;
                printf("%d\n",sum);

            }

                    printf("%s\n",string);

}

**/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char name[20];
    char ab[] = "Abdullah" ;
    //gets(name);/// you can take any string like "C M Abdullah Khan" , when hit enter string will end.

    printf("My name is :%s\n",ab);


}
