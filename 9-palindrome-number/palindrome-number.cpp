class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        double n=0;
        while(num>0){
            int rem=num%10;
            n=n*10+rem;
            num=num/10;
        }
        if(n==x){
            return true;
        }
        else{
            return false;
        }
        
    }
};