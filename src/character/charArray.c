#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
   char arr[5] = {'a','b','c','d','e'};
//    int i = 0;
//    arr[3] = 'w';
    int i = 0;
    char *ptr = arr;
    // arr = &a[0];
   for (size_t i = 0; i < 5; i++)
   {
    //    printf("%c ",arr[i]);
    //    printf("%d ",arr[i]);
       /* code */
       printf("%d ",*(ptr+i));
   }
   
   return 0;
}
