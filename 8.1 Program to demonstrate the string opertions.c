#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20], str2[20], str3[20];
    printf("Enter the string1: ");
    gets(str1);   // or scanf("%s", str);
    printf("\n enter the string2: ");
    gets(str2);
    int length=strlen(str1);
    printf("\nlength of the given string is %d", length);          //for length
    printf("\nThe concotenation of two strings is %s", strcat(str1, str2));
    int res=strcmp(str1, str2);
    printf("\ncompare string result is: %d", res);
    strcpy(str3,str2);
    printf("\nThe copy of two strings: %s", str3);    //copy string
    printf("\nuppercase of string 1 is: %s", strupr(str1));   //uppercase string
    printf("\nlowercase of string 2 is: %s", strlwr(str2));   //lowercase string
    printf("\nreverse of string 3 is: %s", strrev(str3));     //reverse string                          
}   