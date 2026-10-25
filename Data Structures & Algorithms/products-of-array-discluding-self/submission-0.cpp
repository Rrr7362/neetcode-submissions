class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prev(n,1);

        for(int i=1;i<n;i++){
            prev[i] = prev[i-1]*nums[i-1]; 
        }

        int succ = 1;
        for(int i=n-1;i>=0;i--){
            prev[i] *= succ;
            succ *= nums[i];
        }

        return prev;

    }
};
