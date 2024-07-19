#include <stdio.h>

int main()
{
 char ch;
 
 printf("Enter the uppercase sentence:\n");
 scanf("%c",&ch);

 ch=ch+32;
 printf("\n The lowercase sentence is :%c",ch);
    return 0;
    
}