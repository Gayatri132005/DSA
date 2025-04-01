
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, char> sToT, tToS; // Maps for character mappings

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i], c2 = t[i];

            // If c1 was already mapped, check if it maps correctly
            if (sToT.count(c1) && sToT[c1] != c2) return false;
            if (tToS.count(c2) && tToS[c2] != c1) return false;

            // Create the mapping
            sToT[c1] = c2;
            tToS[c2] = c1;
        }
        return true;
    }
};