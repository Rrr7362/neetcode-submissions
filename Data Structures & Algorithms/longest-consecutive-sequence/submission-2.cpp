
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        int len = 0;
        int maxLen = 0;

        for (int i : nums) {
            s.insert(i);
        }

        for (int i = 0; i < n; i++) {
            int curr = nums[i];

            if (s.find(curr - 1) == s.end()) {
                len = 1;

                while (s.find(curr + 1) != s.end()) {
                    len++;
                    curr++;
                }

                maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
};
