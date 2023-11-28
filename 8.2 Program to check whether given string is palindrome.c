#include<stdio.h>
#include<string.h>
void printrev(char str[])
{
    int len=strlen(str);
    printf("Given string is: %s\n", str);
    printf("Reversed string: ");
    for(int i=len-1;i>=0;i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
 int ispali(char str[])
 {
  int len=strlen(str);
 for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
       {
        return 0;   //not palindrome
        }
    }
    return 1;    //palindrome
}
int main()
{
    char input[100];
    printf("Enter the string: ");
    gets(input);
    printrev(input);
    if(ispali(input))
    {
        printf("%s is a palindrome.\n", input);
    }
    else{
        printf("%s is not a palindrome.\n", input);
    }
}