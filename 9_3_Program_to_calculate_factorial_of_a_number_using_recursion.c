#include <stdio.h>
int factorial(int n)
{
    if (n==1 || n==0 )
    {
        return n;
    }
    else{
        return n * factorial(n-1);
    }
}
void main()
{
    int n;
    printf("Enter number: ");
    scanf("\n%d", &n);
    printf("Factorial: %d\n", factorial(n));
}