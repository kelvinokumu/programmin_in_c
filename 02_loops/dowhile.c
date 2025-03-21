#include<stdio.h>

void main(){
    printf("Before \n");

    int i = 1;
    do{
        printf("%d \n", i);
        i++;
    }while(i < 10);

    printf("After \n");
}