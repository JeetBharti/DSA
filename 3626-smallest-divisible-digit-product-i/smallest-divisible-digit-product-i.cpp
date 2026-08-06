class Solution {
public:
    int product(int n){
        int prod=1;
        int num=n;
        while(num>0){
            int rem=num%10;
            prod=prod*rem;
            num=num/10;
        }
        return prod;
    }

    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            if(product(i)%t==0){
                return i;
            }
        }    
    }
};