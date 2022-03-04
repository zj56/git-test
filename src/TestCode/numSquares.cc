#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n = 10;
   vector<int> dp(n + 1,INT_MAX);
   dp[0] = 0;
    for (size_t i = 1; i <= n; ++i)
    {
        for (size_t j = 1; j*j <= i; ++j)
        {       
            dp[i] = min(dp[i],dp[i-j*j]+1);
            /* code */
        }
        
        /* code */
    }
     for (size_t i = 0; i < dp.size(); i++)
    {
        cout<<dp.at(i)<<endl;
        /* code */
    }
    
   return 0;
}
