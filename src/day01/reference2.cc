#include <iostream>
#include <cmath>

using namespace std;
int& sum(){
    int num = 10;
    int& rNum = num;
    return rNum;
}

int main()
{
    // 不要返回局部变量引用
   int& result = sum();
    cout<<"result:"<<result<<endl;
   system("pause");
   return 0;
}
