/*
 ============================================================================
 Name        : Problem1.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50}, n , i , count= 0;
    printf("Enter Item : ");
    scanf("%d", &n);
    for(i = 0 ; i<5; i++){
        if (a[i]==n){
            printf("Location of the item is : %d", i);
            count++;
            break;
        }
    }
    if (count<=0){
        printf("No");
    }
}
