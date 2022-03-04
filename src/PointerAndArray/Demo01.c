#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
   int a[5] = {9,7,5,3,1};
   int* p = &a[0];
   printf("%p ,%p\n",p,p+1);
   printf("%p ,%p\n",&a[0],&a[1]);
   return 0;
}
