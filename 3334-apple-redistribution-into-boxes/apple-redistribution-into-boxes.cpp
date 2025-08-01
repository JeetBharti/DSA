class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n=apple.size();
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=apple[i];
        }

        sort(capacity.begin(),capacity.end());
        int m=capacity.size();
        int count=0;

        for(int i=m-1;i>=0;i--){
            sum-=capacity[i];
            count++;

            if(sum<=0){
                break;
            }
            
        }
        
        return count;
    }
};