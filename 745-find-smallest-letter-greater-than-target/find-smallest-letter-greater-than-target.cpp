class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int left=0;
        int right=n-1;
        int pos=-1;

        while(left<=right){
            int mid=left+(right-left)/2;
            if(letters[mid]> target){
                pos=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        if(pos==-1){
            return letters[0];
        }
        else{
            return letters[pos];
        }
        
    }
};