class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, char> mapST; // s -> t mapping
        unordered_map<char, char> mapTS; // t -> s mapping

        for (int i = 0; i < s.size(); i++) {
            char ch1 = s[i];
            char ch2 = t[i];

            // If mapping exists, check consistency
            if (mapST.count(ch1) && mapST[ch1] != ch2) return false;
            if (mapTS.count(ch2) && mapTS[ch2] != ch1) return false;

            // Create mapping if it doesn't exist
            mapST[ch1] = ch2;
            mapTS[ch2] = ch1;
        }

        return true;
    }
};
