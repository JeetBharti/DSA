class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int dup=-1;
        long long total=(n*(n+1))/2;
        cout<<total;

        for(int &num:nums){
            mp[num]++;
        }

        long long sum=0;
        for(auto &a:mp){
            if(a.second>1){
                dup=a.first;
            }
            sum+=a.first;
        }
        cout<<sum;
        int res=total-sum;
        return {dup,res};
        


        
    }
};