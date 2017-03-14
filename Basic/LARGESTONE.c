#include <stdio.h>
int main()
{
    int x, y , z;
    x = 200;
    y = 310;
    z = 40;
    if (x>y){
        if (x>z)
            printf("%d",x);
        else
            printf("%d",z);
    }
    else if ( z > y){
        if (x>z)
            printf("%d",x);
        else
            printf("%d",z);
    }
    else
         printf("%d",y);
    return 0;
}

