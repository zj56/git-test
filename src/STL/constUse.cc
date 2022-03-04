#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;
// 
struct student
{
    string name;
    int age;
    int score;
    /* data */
};
/* void printStudnts(student s){
    cout<<"姓名："<<s.name<<endl;
    // 值传递，缺点：内存开销
} */
void printStudnts(const student* s){
    cout<<"姓名："<<s->name<<endl;
}

int main()
{   
    struct student s = {"张三",15,17};
    printStudnts(&s);
   return 0;
}
