#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
   char str[] = "hello";
   printf("%s\n",str);
   char *p = "wor";
   int i = 0;
   for(;*p != '\0';p++){
       str[i++] = *p; 
   }
   str[i] = '\0';
    printf("%s\n",str);
   return 0;
}
