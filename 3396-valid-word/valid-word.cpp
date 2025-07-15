class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if (n < 3) {
            return false;
        }

        int countVowel = 0;
        int countConsonant = 0;

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            // Check if character is a letter
            if (((ch>='0' && ch<='9') || ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                // Check for vowels
                if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                    ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    countVowel++;
                } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                    countConsonant++;
                }
                else{}
            }
            else{
                return false;
            }
        }

        return (countVowel >= 1 && countConsonant >= 1);
    }
};
