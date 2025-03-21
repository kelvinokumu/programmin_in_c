#include<stdio.h>

int sum(int a, int b);
int mult(int a, int b);

void main(){
    int num1; 
    int num2;

    printf("Enter first value ");
    scanf("%d",&num1);

    printf("Enter second value ");
    scanf("%d",&num2);

    if(num1 == num2){
        printf("Same \n");
    }else{
        printf("not same \n");
    }


    int ans = sum(num1,num2);
    printf("The sum is %i \n",ans);

    int ans2 = mult(num1,num2);
    printf("The product is %i \n",ans2);
}

int sum(int a, int b)
{
    int total = a + b;
    return total;
}

int mult(int a, int b)
{
    int product = a * b;
    return product;
}