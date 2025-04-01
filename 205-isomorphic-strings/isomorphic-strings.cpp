
class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if( s.size() !=t.size()) return false;
       unordered_map<char, char>sTo, tTo;
        for( int i=0;i<t.size(); i++){
             char c1=s[i];
              char c2=t[i];
                 if( sTo.count(c1) &&  sTo[c1]!=c2) return false;
                if( tTo.count(c2)  && tTo[c2]!=c1) return false;



                 sTo[c1]=c2;
                 tTo[c2]=c1;
        }
         return true;
    }
};