class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        int ans = -1; // Initialize with all bits set to 1
        
        for (int i = 0; i < n; ++i) {
            // Check if the element is not in its correct position
            if (nums[i] != i) {
                if (ans == -1) {
                    ans = nums[i];
                } else {
                    ans &= nums[i];
                }
            }
        }
        
        return max(ans, 0);
    }
};