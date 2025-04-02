class Solution {
public:
    int maxDepth(string s) {
         int count=0;
           int ans=INT_MIN;
            for( int i=0;i<s.size();i++){

                  if( s[i]==')')   count--;
                   if( s[i]=='(')   count++;
                    ans=max( ans, count);
            }
             return ans ;
    }
};