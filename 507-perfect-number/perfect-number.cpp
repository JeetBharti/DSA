class Solution {
public:
    bool checkPerfectNumber(int num) {

        if(num==1){
            return false;
        }
        vector<int>ans;
        int n=num;
        for(int i=1;i<=sqrt(n);i++){
            if(num%i==0){
                ans.push_back(i);
                if(n/i!=i && n/i!=n){
                    ans.push_back(n/i);
                }
            }
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
            sum=sum+ans[i];
        }
        if(n==sum){
            return true;
        }
        else{
            return false;
        }

        
    }
};