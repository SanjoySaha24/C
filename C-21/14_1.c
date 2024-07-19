#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char str[100];

    printf("Enter the string - ");
    gets(str);
    char c;
    int l=strlen(str);
    int x= l-1;
    for(i=0; i<l/2;i++)
    {
        c=str[i];
        str[i]=str[l-i-1];
        str[l-i-1] = c;
    }
     printf("Reversed - ");
    puts(str);
}