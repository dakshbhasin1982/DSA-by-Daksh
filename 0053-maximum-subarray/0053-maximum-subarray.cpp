 class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int best = nums[0];
        int running = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            running = max(nums[i], running + nums[i]);

            if(running > best)
                best = running;
        }

        return best;
    }
};