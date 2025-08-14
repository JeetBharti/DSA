class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        int count=0;
        char maxchar=' ';

        for(int i=0;i<n;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                maxchar=max(maxchar,num[i]);
                count++;
            }
        }
        if(count==0){
            return "";
        }
        else{
            return string(3,maxchar);
        }
        
        
    }
};