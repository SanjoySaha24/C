#include <stdio.h>
void main() 
{
   char string[100], sub[100];
   int position, length, c = 0;
    printf("Input the string : ");
    gets(string);

   printf("Input the position and length of substring :");
   scanf("%d%d", &position, &length);

    while (c < length){
      sub[c] = string[position+c-1];
      c++;
   }
   sub[c] = '\0';
printf("The substring from the string is :\" %s\"\n", sub);

}


