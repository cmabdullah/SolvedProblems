/*
 ============================================================================
 Problem 	 : find minimum element in array
 Name        : Problem1_1.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

int main() {
    int array[100], minimum, size = 5, i, location = 1;
    printf("Enter five element : ");
    for(i=0;i<5;i++){
    scanf("%d", &array[i]);
    minimum=array[0];
    }
    for(i=1;i<5;i++) {
        if(array[i]<minimum) {
           minimum=array[i];
           location=i+1;
        }
    }
    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
    return 0;
}
