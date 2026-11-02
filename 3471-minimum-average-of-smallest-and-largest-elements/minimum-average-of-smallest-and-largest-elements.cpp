class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int n = nums.size();
        float average = INT_MAX;
        float sum = 0;
        for(int j = n - 1 ; j > i ; j--){
            sum = (nums[i] + nums[j]) / 2.0;
            
            average = min(average , sum);
            i++;
        }
        return average;
    }
};