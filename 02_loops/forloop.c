#include<stdio.h>

void main(){
    printf("Before the loop \n");

    for(int i = 10; i > 0; i--)
    {
        printf("%d \n",i);
    }
    printf("After the loop\n");
}