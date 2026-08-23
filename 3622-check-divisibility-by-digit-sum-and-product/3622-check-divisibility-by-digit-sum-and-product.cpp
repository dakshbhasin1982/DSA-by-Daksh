class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,product=1,x=n;
        while(x>0){
            int digit = x%10;
            sum += digit;
            product *= digit;
            x=x/10;
        }
        return (n%(sum+product)==0);
    }
};