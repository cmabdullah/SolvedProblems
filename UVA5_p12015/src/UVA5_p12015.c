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
int arrG[6];
int arrtemp[6];
int main(){
	/*** this code is working fine.........**/
    char** linux_destro ;

    int arr[10];// = {1,4,3,2,2,4};
    	int i,j,k,l,temp, count, p, x,T;
    	scanf("%d",&T);
		for (k=1;k<=T;k++){//test case start
    	count = 0;
    	p = 0;
    linux_destro = malloc(50 * sizeof(char*));
    for (i = 0; i < 10; i++) {
    	linux_destro[i] = malloc((MAX_STRING_SIZE + 1) * sizeof(char));
        memset(	linux_destro[i], 0, MAX_STRING_SIZE + 1);
    }
    for (i = 0; i<10;i++){
    	scanf("%s%d",linux_destro[i], &arr[i]);
    }
/**
    for ( i =0 ;i<6; i++){
        printf("%s %d\n", linux_destro[i],arr[i]);
    }
    */


//free block



    /****/

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
