/*
 ============================================================================
 Name        : UVA8_575SkewBinary.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 http://sojolewu6.blogspot.com/2016/06/575-skew-binary-solution-hints.html
 http://ruhinraihan.blogspot.com/2012/05/uva-575-skew-binary-solution.html
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
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
	long int n,i,sum,num,b;
	char s[100];
	while(gets(s)){
	sum=0;
	n=strlen(s);
	for(i=0;i<n;i++){
		num=s[i]-'0';
		b=num*(pow(2,n-i)-1);
		sum=sum+b;
		}
	if(sum==0)
		break;
	printf("%ld\n",sum);
	}
return 0;
}

