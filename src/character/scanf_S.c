#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
   char c;
//    scanf_s("%c",&c,1);
    // c=getchar();
    // 一次读一个s
    c = _getch();
    // 不显示，一次读入一个，自动回车
    printf("%c",c);
   return 0;
}
