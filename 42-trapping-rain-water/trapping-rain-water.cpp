class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        stack<int>st;
        int ans=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && height[i]>height[st.top()]){
                int curr = height[st.top()];
                st.pop();
                if(st.empty())
                break;
                int width = i-st.top()-1;
                ans += (min(height[st.top()],height[i])-curr)*width;
            }
            st.push(i);
        }
        return ans;
                
    }
};