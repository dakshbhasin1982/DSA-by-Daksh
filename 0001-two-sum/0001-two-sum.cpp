class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i=0 ; i<nums.size(); i++){
            int curr = nums[i];
            int req = target - curr;

            if(mp.find(req) != mp.end()){
                return {mp[req], i};
            }
            mp[curr] = i;
        }
        return {};
    }
};