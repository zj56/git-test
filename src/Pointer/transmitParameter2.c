#include<stdio.h>
#include<stdlib.h>

/* void fun(int* p){
    p = NULL;
    //*p = NULL;//12 =NULL;报错
} */

// p和p1都为&a
// 地址值的传递
// p和p1都指向a，是两个指针
// 二级指针
void fun2(int** p){//p =&p1
    printf("p = %p\n",p);
    *p = NULL;//*p = p1 =NULL
    printf("p = %p\n",p);
}
int main(void){
    int a = 2;
    int *p1 = &a;
    printf("%p\n",p1);
    fun2(&p1);
    printf("%p\n",p1);

}
// 修改谁，传递谁的地址