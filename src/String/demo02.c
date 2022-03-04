#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // "hello c3~";
    printf("%s","hello c3~");
    char* p = "hello c2~";
    // 常量字符串自带‘\0’,不可被修改
    // *p ='w'报错
    // p = "adad"可以
    printf("%s\n",p);
    printf(p);
    // ---------
    char str[] = "hello cs";
   return 0;
}
