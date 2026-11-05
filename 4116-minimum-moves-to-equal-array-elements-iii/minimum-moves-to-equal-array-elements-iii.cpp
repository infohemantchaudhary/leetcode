class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxElement = INT_MIN;
        if(n == 1 || n == 0) return 0;
        for(int i = 0 ; i < n ; i++){
            maxElement = max(maxElement,nums[i]);
        }
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            count += abs(maxElement - nums[i]);
        }
        return count;
    }
};