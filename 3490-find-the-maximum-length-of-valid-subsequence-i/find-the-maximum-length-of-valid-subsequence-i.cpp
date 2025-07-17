class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();
        int counteven=0;
        int countodd=0;

        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                counteven++;
            }
            else{
                countodd++;
            }
        }

        int parity=nums[0]%2;
        int alternating=1;
        for(int i=1;i<n;i++){
            int next=nums[i]%2;
            if(parity!=next){
                alternating++;
                parity=next;
            }
        }
        return max({alternating,countodd,counteven});
    }
};