class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        for(char &c: s){
            c=tolower(c);
        }

        string result="";
        for(char c: s){
            if(isalnum(c)){
                result+=c;
            }
        }

        int a=result.size();
        int i=0;
        int j=a-1;
        
        while(i<j){
            if(result[i]==result[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
        
        
    }
};