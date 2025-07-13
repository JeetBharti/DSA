class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;

        for(int i=0;i<matches.size();i++){
            int loser=matches[i][1];
            mp[loser]++;
        }

        vector<int>win;
        vector<int>lost1;

        for(int j=0;j<matches.size();j++){
            int winner=matches[j][0];
            int loser=matches[j][1];

            if(mp.find(winner)==mp.end()){
                win.push_back(winner);
                mp[winner]=2;
            }

            if(mp[loser]==1){
                lost1.push_back(loser);
            }
        }
        sort(win.begin(),win.end());
        sort(lost1.begin(),lost1.end());
        
        return {win,lost1};
    }
};