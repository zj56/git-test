#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a = 12;
    int* p = &a;
    // 读
    printf("%p,%d,%d\n",p,*p,a);
    *p = 145;
    // 写
    printf("%p,%d,%d\n",p,*p,a);
    // a = 145;
    printf("%p,%p,%p\n",p,&(*p),&a);
// p指向a，则*p == a;
// p 指向一个变量， p==&a
// *p就是这个变量本身
}