#include<stdio.h>
#include"Tarun_kumar.h"
int main (){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    // print the factorial of number
    printf("factorial is %d\n",fac(n));

    // print the fibonacci series

    printf("%d\n",fabonacii(n));

    if (palid(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);


    return 0;
}