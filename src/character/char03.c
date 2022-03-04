#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
/*    char c;
   char d; */
/*    scanf("%c",&c);
   scanf("%c",&d);
//    scanf连续读入
// 将缓冲区的数据读入c
// 输入字符会产生影响
// 回车会产生影响 */
    int c;
    char d;
    scanf("%d",&c);
    setbuf(stdin,NULL);
    // 清空缓冲区
    scanf("%c",&d);
   printf("%d,%c\n",c,d);
   return 0;
}
