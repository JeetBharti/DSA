class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        string str="";

        for(int i=0;i<max(m,n);i++){
            if(i<m && i<n){
                str.push_back(word1[i]);
                str.push_back(word2[i]);
            }
            else if(i<m){
                str.push_back(word1[i]);
            }
            else{
                str.push_back(word2[i]);
            }
        }
        return str;
        
    }
};