#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    string s = "applepenapple";
    vector<string> wordDict={"apple","pen"};
    int n = s.length();
    vector<bool> dp(n+1,false);
    dp[0] = true;
    for (size_t i = 1; i <= n; i++)
    {
        for(const string & word:wordDict){
            cout<<word<<endl;
            int len = word.length();
            if(i >= len &&s.substr(i-len,len)==word){
                dp[i] = dp[i] || dp[i-len];
            }
        }        
    }
    
    // cout<< dp.size()<<endl;  
    for (size_t i = 0; i < dp.size(); i++)
    {
        cout<<dp.at(i)<<endl;
        /* code */
    }
        
   return 0;
}
