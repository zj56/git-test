#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Teach
{
    int age;
};
int main(void){
    struct Teach teas[2] = {{1},{2}};
    printf("%d",teas[0].age);
    return 0;
}