class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size();
        int count=1;
        string res="";
        res+=s[0];

        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                count++;
            }
            else{
                count=1;
            }
            if(count<3){
                res+=s[i];
            }
            
        }
        return res;
    }
};