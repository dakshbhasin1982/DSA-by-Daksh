 class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};
        int ans = 0;

        for (char ch : s) {
            freq[ch]++;

            if (freq[ch] % 2 == 0) {
                ans += 2;
            }
        }

        if (ans < s.length()) {
            ans++;
        }

        return ans;
    }
};
