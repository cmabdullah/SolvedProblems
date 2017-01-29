#include<stdio.h>
int main(){
    int range;
    int value[100], i;
    printf("Enter range : ");
    scanf("%d", &range);
    for (i = 0; i< range ; i++){
    scanf("%d", &value[i]);
    }
        for (i = 0; i< range ; i++){
        if (value[i]%2 ==0){
            printf("even\n");
        }
        if (value[i]%2!=0){
            printf("odd\n");
        }
    }
}
