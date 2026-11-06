class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int first = 0;
        int second = 0;
        first = nums[0] * nums[1];
        second = nums[n - 1] * nums[n - 2];
    
    return second - first;
    }
};