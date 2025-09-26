class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size();
        int n=needle.size();
        int i=0;
        int j=0;
        for(int a=0;a<m;a++){
            if(haystack[a]==needle[j]){
                j++;
                if(n==j){
                    return i;
                }
            }
            else{
                a=i;
                i++;
                j=0;
            }
        }
        return -1;
        
    }
};