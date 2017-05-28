/*
 ============================================================================
 Name        : Uva31_12157TariffPlan.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main(){
   long int n,arr[10000],t,Mile,Juice,c,i;
    scanf("%ld",&t);
    c=0;
    while(t--){
        c++;
        Mile =0;
       Juice =0;
      scanf("%ld",&n);
      for(i=1;i<=n;i++){
          scanf("%ld",&arr[i]);
          Mile =Mile+(arr[i]+30)/30;
          Juice =Juice+(arr[i]+60)/60;
      }
      Mile =Mile * 10;
      Juice =Juice*  15;
      if(Mile<Juice){
          printf("Case %ld: Mile %ld\n",c,Mile);
      }
      else if(Juice == Mile){
         printf("Case %ld: Mile Juice %ld\n",c,Juice);
      }
      else if(Juice<Mile){
          printf("Case %ld: Juice %ld\n",c,Juice);
      }
    }
}
