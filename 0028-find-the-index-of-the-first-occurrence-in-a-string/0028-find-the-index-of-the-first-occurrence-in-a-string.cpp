 class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        for (int start = 0; start <= n - m; start++) {

            int index = 0;

            while (index < m &&
                   haystack[start + index] == needle[index]) {

                index++;
            }

            if (index == m) {
                return start;
            }
        }

        return -1;
    }
};