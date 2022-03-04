#include<stdio.h>
#include<stdlib.h>
void fun(int* p1,int* p2){
    int m = *p1;
    *p1 = *p2;
    // a = 2 = 3->a =3
    *p2 = m;
}
int main(void){
    int a = 2;
    int b = 3;
    printf("%d,%d\n",a,b);
    fun(&a,&b);
    printf("%d,%d",a,b);
    return 0;
}