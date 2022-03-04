#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ONE 1
#define PRINTF printf("%d\n",ONE)
// 宏可以给一切重命名
// 本质是单纯的替换
int main(void)
{
    printf("%d\n",ONE);
    PRINTF;
   return 0;
}


