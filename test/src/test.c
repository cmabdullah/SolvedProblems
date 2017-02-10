/*
 ============================================================================
 Name        : ArmstrongNumber.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Following program printing all Armstrong number except 153.but //why
// i can not fix it.needed help

#include <stdio.h>
int main(void) {
    int n1, n2, n3;

      int mid;
      if( n1 > n2 )   {
              if( n3 > n2)
                    {
                            if( n3 < n1 )
                                    mid = n3;
                            printf( "%d  ", mid );
                            else
                                    mid = n1;
                            printf( "%d  ", mid );
                    }
             else {
                    mid = n2;
                    printf( "%d  ", mid );
            }
     }
     else {
            if( n2 > n3 )
             {
                    if ( n1 > n3)
                      mid = n1;
                    printf( "%d  ", mid );
                    else
                    mid = n3;
                    printf( "%d  ", mid );
             }
            else{
                    mid = n2;
                    printf( "%d  ", mid );
            }
    }
    return mid ;
}

