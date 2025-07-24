class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        vector<int>digit;

        for(int i=0;i<n;i++){
            if(s[i]>96 && s[i]<123){
                continue;
            }
            else{
                digit.push_back(s[i]-'0');
            }
        }
        int a=digit.size();

        if(a==0){
            return -1;
        }
        int maxele=INT_MIN;
        int secondlar=-1;

        for(int i=0;i<a;i++){
            if(digit[i]>maxele){
                maxele=digit[i];
            }
        }

        for(int i=0;i<a;i++){
            if(digit[i]!=maxele && digit[i]>secondlar){
                secondlar=digit[i];
            }
        }
        return secondlar;
        
    }
};