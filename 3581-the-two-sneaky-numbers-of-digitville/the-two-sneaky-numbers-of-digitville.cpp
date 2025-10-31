class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;

        for(int i:nums){
            mp[i]++;
        }

        for(auto ele:mp){
            if(ele.second>=2){
                ans.push_back(ele.first);
            }
        }
        return ans;
        
    }
};