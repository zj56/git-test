#include<stdio.h>
#include<stdlib.h>
int main(void){
    printf("%c\n",'A');
    printf("%d\n",'A');
    // %c char
    // 字符的本质就是数字，不同显示方法
    putchar('A');
    putchar('\n');
    return 0;
}