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

#include<stdio.h>
int main()
{
    int t,i,a,b,c,ans;
   while( scanf("%d",&t)==1){
    for(i=1;i<=t;i++)
    {
    	scanf("%d %d %d",&a,&b,&c);
    	if(a>1000||a<10000){
    if(b>1000||b<10000){
    if(c>1000||c<10000){
    if((a>b && a<c)||(a<b&&a>c))
        ans=a;
    else if((b>a&&b<c)||(b<a&&b>c))
        ans=b;
    else if((c>b && c<a)||(c<b)&&c>a)
        ans=c;
    			}
    		}
    }
printf("Case %d: %d\n",i,ans);

}
return 0;

}
}

