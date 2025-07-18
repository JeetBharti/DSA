class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>v;
        int maxnum=candies[0];

        for(int i=1;i<n;i++){
            if(maxnum<candies[i]){
                maxnum=candies[i];
            }
        }

        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxnum){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        return v;
        
    }
};