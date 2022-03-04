//
// Created by zj56 on 2021/12/12.
//
#include <stdio.h>
#include <stdlib.h>
union Un{
    char c;
    short s;
    int i;
}un1;
int main(void){
    printf("%p\n%p\n%p\n",&un1.c,&un1.s,&un1.i);
    union Un un2 ={.c='a'};
    printf("%c\n%p\n%p\n",un2.c,un2.s,un2.i);
    return 0;
}
