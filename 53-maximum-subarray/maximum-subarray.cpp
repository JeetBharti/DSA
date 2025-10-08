class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int arrsum=0;
        int maxi=INT_MIN;

        for(int i : nums){
            arrsum+=i;
            maxi=max(maxi,arrsum);

            if(arrsum<0){
                arrsum=0;
            }
        }
        return maxi;
    }
};