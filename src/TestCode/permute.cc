#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void backtracking(vector<int> &nums,int level,vector<vector<int>> &ans){
    if(level == nums.size() - 1){
        ans.push_back(nums);
        return;
    }
    for (size_t i = level; i < nums.size(); i++)
    {
        // 修改当前结点状态
        swap(nums[i],nums[level]);
        // 递归子节点
        backtracking(nums,level+1,ans);
        // 递归完后改回
        swap(nums[i],nums[level]);
    }
    
}
int main()
{
   vector<vector<int>> ans;
   vector<int> nums = {1,2,3};
   backtracking(nums,0,ans);
   return 0;
}
