#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    string S = "ADOBECODEBANC";
    string T = "ABC";
   vector<int> chars(128,0);
   vector<bool> flag(128,false);
   for (size_t i = 0; i < T.size(); i++)
   {
       flag[T[i]] = true;
       ++chars[T[i]];
       /* code */
   }
   int cnt = 0,l = 0,min_l = 0,min_size = S.size()+1;
   for (size_t r = 0; r < S.size(); r++)
   {
       if(flag[S[r]]){
           if (--chars[S[r]]>=0)
           {
               ++cnt;
           }
           
       }
       while (cnt==T.size())
       {
        if (r - l + 1 < min_size)
        {
            min_l = l;
            min_size = r - l + 1;
        }
        if(flag[S[l]] && ++chars[S[l]]>0){
            --cnt;
        }
        ++l;
       }
       
   }
    min_size > S.size()?"":S.substr(min_l,min_size);
   return 0;
}
