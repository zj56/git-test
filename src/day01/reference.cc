#include <iostream>
#include <cmath>

using namespace std;
void Swap2(int* p1,int* p2);
void Swap3(int& ref1,int& ref2);
void Swap2(int* p1,int* p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
// 使用引用可以传递某个对象，而不只是复制一份对象
void Swap3(int& ref1,int& ref2){
    int temp ;
    temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}




int main()
{
    int num1 = 10,num2 = 5;
    Swap3(num1,num2);
    cout<<num1<<endl;
   int cockroach = 1024;
//    别名

   int& xiaoQiaong = cockroach;
//    引用必须被初始化
// 不可以直接引用常量
// double& d = 12.3;
   system("pause");
   return 0;
}
