#include<stdio.h>

void main(){

    int x = 10;
    int z = 1;
    //  z == x;
    printf("%d \n",z == x);

    int i = 1;
    printf("%d \n",i);

    // pre-increment
    int a = ++i;
    printf("After ++i i: %d, a: %d,  \n",i, a);

    // post increment
    int b = i++;
    printf("After i++ i: %d, b: %d,  \n",i, b);
}