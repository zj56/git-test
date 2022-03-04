#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu{
    char name[10];
    int age; 
};
struct Stu1{
    char name[10];
    int age; 
};
// 不同结构体用不同名字
// Stu，Stu1区分
struct Stu2{
    char name[10];
    int age; 
}stu1,stu2;
// 声明结构体变量stu1，stu2
struct{
    char name[10];
    int age; 
}stu3,stu4;
// 声明结构体变量stu3，stu4
// 时，结构体名可以省去
int main(void){
    // 初始化
    struct Stu sd = {"C程序猿",27};
    // 实列变量的访问
    printf("%s,%d\n",sd.name,sd.age);
    printf("%s,%d\n",(&sd)->name,(&sd)->age);
    struct Stu* p = &sd;
    printf("%s,%d",p->name,p->age);
    // 类比int* p
    struct Stu* p1 = (struct Stu*)malloc(sizeof(struct Stu));
    // p1->name = "程序猿";错误
    strcpy(p1->name,"程序猿");
    (*p1).age = 18;
    printf("%s,%d\n",p1->name,p1->age);
    return 0;
}
void fun(){
    struct Stu1 sd1;
}