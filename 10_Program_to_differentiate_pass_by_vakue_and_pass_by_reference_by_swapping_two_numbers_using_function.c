#include<stdio.h>
void swapbyref(int *a, int *b)         //pass by reference
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nSwapped values are %d and %d by reference", *a, *b);
}
void swapbyvalue(int a, int b)         //pass by value
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nSwapped values are %d and %d by value", a, b);
}
void main()
{
    int x=1, y=2;
    printf("\n%d and %d are original", x,y);
    swapbyref(&x,&y);
    swapbyvalue(x,y);
}