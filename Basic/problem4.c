#include<stdio.h>

int main(){
    float  b ,c, val[100], sum = 0, x ,y, l;
     int a , i, j, k = 0,  arr[100], range;
    printf("Enter range :");
    scanf("%d", &range);
    scanf("%d", &a);
        for(i = 0 ; i<range; i++){
                arr[i] = a%10;
        a = a/10;
        }
        for (i = range-1; i>=0;i--){
                x = arr[i];
                k++;
                y = pow(x, k);
                sum = sum + y;
}
 l = (float)a;
if (sum == l ){
    printf("Match") ;
}
//if end
else
    printf("Unmatch");
}
