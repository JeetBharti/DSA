class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;

        for(int &num: arr){
            mp[num]++;
        }

        unordered_set<int>st;
        for(auto &a:mp){
            int ans=a.second;
            if(st.find(ans)!=st.end()){
                return false;
            }
            else{
                st.insert(ans);
            }
        }
        return true;
    }
};