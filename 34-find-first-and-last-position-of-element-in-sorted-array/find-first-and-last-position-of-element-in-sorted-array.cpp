class Solution {
public:
    int Left(vector<int>&nums, int target, int n){
        int l=0,r=n-1;
        int left_idx=-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                left_idx=mid;
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return left_idx;
    }

    int Right(vector<int>&nums, int target, int n){
        int l=0,r=n-1;
        int right_idx=-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                right_idx=mid;
                l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return right_idx;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();

        int left_most=Left(nums,target,n);
        int right_most=Right(nums,target,n);

        return {left_most, right_most};
    }
};