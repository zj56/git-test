#include <iostream>
#include <cmath>

using namespace std;
int power(int,int);
int power(int num1,int num2){
    int result = 1;
    for (size_t i = 0; i < num2; i++)
    {
        /* code */
        result *= num1;
    }
    return result;
    
}

int main()
{
    // 声明函数指针-ptrPower
    int(*ptrPower)(int,int);
    // 让声明的函数指针指向函数
    ptrPower = power;
    cout<<ptrPower(3,4)<<endl;
//    system("pause");
   return 0;
}
