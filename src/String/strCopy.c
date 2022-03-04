#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
   char str[] = "hello";
   char str1[4] = "wor";
//    int *p = str1;
   strcpy(str,str1);
   printf("%s",str);
   return 0;
}
