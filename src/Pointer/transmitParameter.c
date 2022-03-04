#include<stdio.h>
#include<stdlib.h>
// void fun(int b){
//     printf("%d",b);
//     b = 12;
//     printf
// }
void fun(int* p){
    printf("b = %d\n",*p);
    *p = 12;
    printf("b = %d\n",*p);

}
int main(void){
    int a = 2;
    printf("a = %d\n",a);
    fun(&a);
    printf("a = %d\n",a);

}