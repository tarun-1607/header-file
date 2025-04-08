// check num is strong or not
int fabonacii(int num) {
    int sum = 0, original = num, digit, factorial;
    int n,a=0,b=1,c;
    printf(" For fabonacii series, Enter the number of terms: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
     printf("%d ",a);
     c=a+b;
     a=b;
     b=c;
    }
     return 0;
 }


// Function to check if a number is palindrome
int palid(int num) {
    int original = num;
    int reversed = 0, remainder;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return (original == reversed);
}

// check  a number is factorial
int fac(int num){
    int sum=1;
    for (int i=1;i<=num;i++){
        sum*=i;
    }
    return sum;
} 