class Solution {
public:
    string reverseWords(string s) {
         vector<string>words;
         int i=0;
          int n=s.length();
       
          while (i < n && s[i] == ' ') i++;
         while (i < n) {
            string word = "";

            // Extract a word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            words.push_back(word);  // Push the word into the vector

            // **Skip multiple spaces** after the word
            while (i < n && s[i] == ' ') i++;
        }
        reverse(words.begin(), words.end());

        // Join words with a single space
        string result = "";
        for (int j = 0; j < words.size(); j++) {
            result += words[j];
            if (j < words.size() - 1) result += " ";  // Add space between words
        }

        return result;   
    }
};