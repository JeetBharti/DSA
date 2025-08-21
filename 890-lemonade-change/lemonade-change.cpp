class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        int twenty=0;
        int n=bills.size();

        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five++;
            }
            else if(bills[i]==10 && five!=0){
                ten++;
                five--;
            }
            else if(bills[i]==20 && (five>=3 || ten!=0)){
                twenty++;
                if(five==0){
                    return false;
                }
                if(ten==0){
                    five=five-3;
                }
                else{
                    ten--;
                    five--;
                }
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};