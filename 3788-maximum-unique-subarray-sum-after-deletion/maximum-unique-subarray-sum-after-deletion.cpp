class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        int maxneg=INT_MIN;
        int sum=0;

        for(int &num: nums){
            if(num<=0){
                maxneg=max(num,maxneg);
            }
            else if(!s.count(num)){
                sum+=num;
                s.insert(num);
            }
        }
        if(sum==0){
            return maxneg;
        }
        else{
            return sum;
        }   
    }
};