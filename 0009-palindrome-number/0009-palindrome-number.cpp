class Solution {
public:
    bool isPalindrome(int x) {
    long temp = x;
        long r=0;
    while (x>0){
        int s = x%10;
        r= r*10+s;
        x= x/10;
    }   
        if(r==temp){
            return true;
        }
        return false;
    }
    
};