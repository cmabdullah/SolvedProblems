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
/******
#include<stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX_STRING_SIZE 1024
int arrG[6];
int arrtemp[6];
int main(){
	// this code is working fine.........
    char** linux_destro ;

    int arr[10];// = {1,4,3,2,2,4};
    	int i,j,k,l,temp, count, p, x,T;
    	scanf("%d",&T);
		for (k=1;k<=T;k++){//test case start
    	count = 0;
    	p = 0;
    linux_destro = malloc(102 * sizeof(char*));
    for (i = 0; i < 10; i++) {
    	linux_destro[i] = malloc((MAX_STRING_SIZE + 1) * sizeof(char));
        memset(	linux_destro[i], 0, MAX_STRING_SIZE + 1);
    }
    for (i = 0; i<10;i++){
    	scanf("%s%d",linux_destro[i], &arr[i]);
    }



//free block


	///array calculation part

	for (i = 0;i<10;i++){
		arrG[i] = arr[i] ;
		//printf("%d ",arr[i]);
	}

	for (i = 0;i<10;i++){
			//arrG[i] = arr[i] ;
		//	printf("%d ",arrG[i]);
		}
	///start sorting
	for(j=0;j<10;j++){
			for(i=j+1;i<10;i++){
				 if(arr[j]>arr[i]){// To sort in descending order, change > to <
					 temp=arr[j];
					 arr[j]=arr[i];
					 arr[i]=temp;
				 }
			}

	    }
	///sorting end

	///sorting result
	  //  printf("\n In ascending order: ");
	    for(i=0;i<10;i++){
	    //    printf("%d  ",arr[i]);
	    }

	    l = arr[9];
	 //   printf("\n%d  ",l);

	    //test

	    for (i = 9;i>=0; i--){
	    	if (l == arr[i])
	    		count++;
	    }

	  //  printf("\n%d  ",count);

	    for (i = 0; i<10; i++){
	    	if (l == arrG[i]){
	    		arrtemp[p] = i;
	    		//printf("\ntest%d",arrtemp[p] );
	    		p++;
	    		}
	    }

	    for(i=0;i<p;i++){
	    	    //    printf("\n arr is %d & index is %d ",arrtemp[i],i);
	    	    }

	    ///compare section
	    ///print section





	    printf("the result is \n");
	    for (i = 0;i<p;i++){
	    		x = arrtemp[i];
	    		for(j = x; j<10;j++){
	    			printf("Case %d: %s %d \n", k,linux_destro[j], arrG[j]);
	    			break;
	    		}
	    }


	   /// for ( i =0 ;i<6; i++){
	     //   printf("%s\n", linux_destro[0]);
	  ///  }

	    for (i = 0; i < 10; i++)
	             free(linux_destro[i]);
	         free(linux_destro);
		}///end tast case
	    return 0;

}
///progtam is working fine

******/

/*****

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

static char s[10][100];
static unsigned r[10];

static unsigned c, n, max, i;

int main(){

    scanf("%u", &n);

    while(n--){
        scanf("%s%u", &s[0], &r[0]);
        max = r[0];

        for(i = 1; i < 10; ++i){
            scanf("%s%u", &s[i], &r[i]);
            if(r[i] > max)
                max = r[i];
        }

        printf("Case #%u:\n", ++c);
        for(i = 0; i < 10; ++i){
            if(r[i] == max)
                printf("%s\n", s[i]);
        }
    }
    return 0;
}


//this procedure is also nice
/****
 * #include<stdio.h>

int main()
{
    int t, i, j, k, max, value[15];
    char url[12][105];
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            max=0;
            for(j=1;j<=10;j++)
            {
                scanf("%s%d",&url[j], &value[j]);
                if(value[j]>max)
                    max=value[j];
            }
            printf("Case #%d:\n",i);
            for(k=1;k<=10;k++)
            {
                if(max==value[k])
                    printf("%s\n",url[k]);
            }
        }
    }
    return 0;
}
 */
#include<stdio.h>

int main()
{
    int n,i;
    char str[20];

    scanf("%d",&n); //how many string

    //input each string
    for(i=0;i<n;i++)
    {
        scanf("%s",&str[i]);
    }

    //display each string
    for(i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }

    return 0;
}

