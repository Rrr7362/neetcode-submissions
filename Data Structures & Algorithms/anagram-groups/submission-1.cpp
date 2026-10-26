
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& nums) {
        unordered_map<string,vector<string>> mp;

        for(int i=0;i<nums.size();i++){
            string curr = nums[i];
            sort(curr.begin(),curr.end());
            mp[curr].push_back(nums[i]);
        }

        vector<vector<string>> ans;

        for(auto [s,p] : mp){
            ans.push_back(p);
        }

        return ans;
    }
};
