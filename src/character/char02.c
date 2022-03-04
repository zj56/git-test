#include<stdio.h>
#include<stdlib.h>
int main(void){
    int d,c;
    scanf("%d",&d);
    scanf("%d",&c);
    // scanf从字符缓冲区拿数据
    // int* p = &d
    // printf("%d",*p)
    printf("%d,%d\n",d,c);
    return 0;
}