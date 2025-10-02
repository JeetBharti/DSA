class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxarea=0;

        while(left<right){
            int currarea=(min(height[left],height[right]))*(right-left);
            maxarea=max(maxarea,currarea);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxarea;
        
    }
};