class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }

        sort(nums.begin(),nums.end());
        int count=1;
        int maxcount=1;

        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]){
                continue;
            }
            else if(nums[i+1] == nums[i] + 1){
                count++;
            }
            else{
                count=1;
            }
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};