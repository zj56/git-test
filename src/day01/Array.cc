#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int N = 5;
    int nums[N];
    for (size_t i = 0; i < N; i++)
    {
        /* code */
                cout<<"请输入第"<<(i+1)<<"个数组元素:";
        cin >> nums[i];
    }
    for (size_t i = 0; i < sizeof(nums); i++)
    {
        /* code */
        cout<<nums[i]<<endl;
    }
        
//    system("pause");
   return 0;
}
