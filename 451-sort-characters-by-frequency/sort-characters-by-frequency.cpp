class Solution {
public:
    string frequencySort(string s) {

          unordered_map<char, int> freq;

            for ( char c:s){
                 freq[c]++;
            }


              priority_queue<pair<int, char>>maxheap;


            for( auto& [ch, count]:freq){
                maxheap.push({count, ch});
               }
            string result;
             while( !maxheap.empty()){
                 auto[count, ch]= maxheap.top();
                  maxheap.pop();
                   result.append(count,ch);
             }
        return result;
    }
};