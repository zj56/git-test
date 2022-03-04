#include <stdio.h>
#include <windows.h>
#include "test.h"
extern int e = 3;
static int a = 13;
const static int b = 10;
int main() {
    printf("main.c\n\n");
    printf("%d",a);
    printf("%d\n",e);
    // tt();
    printf("%d",b);
    return 0;
}