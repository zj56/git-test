#include<stdio.h>
#include<stdlib.h>
int main(void){
    // int* p;
    // double* d;
    // float* f;
    // short* s;
    // 指针指向空间
    int a = 12;
    int* p;
    // 指针是一种装地址类型，数据类型
    p = &a;
    printf("%d",*p);
    return 0;
}