class Solution {
public:
    string largestOddNumber(string num) {
    // Declare an empty vector of strings

        for( int   i=num.length()-1; i>=0;i--){
           
               if( num[i]%2==1){
                   return num.substr(0, i + 1);
               }  
        }
         
    return "";
    
    }
};