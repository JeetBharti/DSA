class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int isequal=true;
                
                for(int k=0;k<n;k++){
                    if(grid[i][k]!=grid[k][j]){
                        isequal=false;
                        break;
                    }
                }
                count+=isequal;
            }
        }
        return count;
        
    }
};