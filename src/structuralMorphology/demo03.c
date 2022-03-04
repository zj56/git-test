#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int age;
typedef age years;
// int 别名 age
typedef unsigned int unint;
// 增加代码可读性
typedef struct Node{
    int a;
} _Node;
// 使用typedef后，struct后面不能再定义变量了
// 是新的名字
int main(void){
    age a;
    unint b;
    // -----
    struct Node s;
    _Node t;
    return 0;
}