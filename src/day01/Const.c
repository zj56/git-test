#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
   int a = 23;
   int b = 45;
   const int* p = &a;
//   == int const *p
   printf("%d\n",*p);
   p = &b;
   printf("%d\n",*p);
// 
    int * const p1 =&a;
   printf("%d\n",*p1);
    *p1=56;
   printf("%d\n",*p1);
   const int* const p2 = &a;
   printf("%d\n",*p2);



   return 0;
}
