#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 字符串本质，以‘\0’结尾的字符数组
int main(void)
{
    char str[3] = {'s','l','\0'};
    printf("%s\n",str);
    puts(str);
    // puts字符串专属
    printf("%s\n",&str[0]);
    printf("%s\n",&str[1]);
    // -------------
    char str2[6] = {'s','l','\0','a','c',0};
    printf("%s\n",str2);
    printf("%s\n",&str[3]);
   return 0;
}
