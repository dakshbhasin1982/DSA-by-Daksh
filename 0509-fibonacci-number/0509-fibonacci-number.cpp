class Solution {
public:
    
    int solmemo(int n,vector<int>& dp) {
       if(n==0 || n==1){
        return n;
       } 
       if(dp[n]!=-1){
         return dp[n];
       }

       return dp[n] = solmemo(n-1,dp)+solmemo(n-2,dp);

    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return solmemo(n,dp);
    }
};