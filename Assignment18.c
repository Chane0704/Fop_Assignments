#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], str2[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Length = %lu\n", strlen(str));
    
    strcpy(rev, str);
    int len = strlen(rev);
    for(int i = 0; i < len/2; i++) 
    {
        char temp = rev[i];
        rev[i] = rev[len-1-i];
        rev[len-1-i] = temp;
    }
    printf("Reversed = %s\n", rev);
    
    if(strcmp(str, rev) == 0) 
    {
        printf("Is a Palindrome\n");
    }
    
    printf("Enter string for equality check: ");
    scanf("%s", str2);
    if(strcmp(str, str2) == 0) 
    {
        printf("Strings are equal\n");
    }
    else 
    {
        printf("Strings are not equal\n");
    }
    
    return 0;
}