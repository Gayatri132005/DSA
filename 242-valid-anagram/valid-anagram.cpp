class Solution {
public:
    bool isAnagram(string s, string t) {

          if( s.size()!=t.size()) return false;

           int count[26];
            for( int i=0;i<s.size();i++){
                 int idx=s[i]-'a';
                  count[idx]++;

            }
            for( int i=0;i<t.size();i++){
                 int idx=t[i]-'a';
                  if( count[idx]==0){
                     return false;
                  }
                  count[idx]--; 
            }
       return true ;     
        
    }
};