#include<stdio.h>
int fib(int n)
{
    if(n == 0 || n == 1)
        return n;
    else 
        return fib(n-1) + fib(n-2);
}
void printfib(int n)
{
    for(int i = 0; i < n; i++)
    {
    printf("%d ", fib(i));
    }
}

void main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("\n%d", &n);
    printfib(n); 
}