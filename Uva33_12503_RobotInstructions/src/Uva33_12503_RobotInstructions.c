/*
 ============================================================================
 Name        : Uva33_12503_RobotInstructions.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
 int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num;
        scanf("%d",&num);int j=1, pos=0;
        int com[105]={0};
        char s[10], b[5]; int n;
        for(int i=1; i<num+1; i++)
        {
            scanf("%s",s);
            if(s[0]=='L')
            {
                com[j++] = -1;
                pos = pos - 1;
            }
            else if(s[0]=='R')
            {
                com[j++] = 1;
                pos = pos + 1;
            }
            else
            {
                scanf("%s %d", b, &n);
                com[j++] = com[n];
                pos = pos + com[n];
            }
        }
        printf("%d\n",pos);
    }
    return 0;
}


/**
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int t,n,s,e,i,b[110];

            scanf("%d",&n);
            s=0;
            for(i=1;i<=n;i++)
            {
                scanf("%s",a);
                if(strcmp(a,"LEFT")==0)
                {
                    s-=1;
                    b[i]=-1;
                }
                else if(strcmp(a,"RIGHT")==0)
                {
                    s+=1;
                    b[i]=1;
                }
                else
                {
                    scanf("%s%d",a,&e);
                    s+=b[e];
                    b[i]=b[e];
                }
            }
            printf("%d\n",s);

return 0;
}
**/
