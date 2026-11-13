class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() && k > 0; i++){
            if(nums[i] < 0){
                nums[i] *= -1;
                k--;
            }
            else{
                break;
            }
        }
        if(k % 2 == 1){
            int mini = 0;
            for(int i = 1; i < nums.size(); i++){
                if(abs(nums[i]) < abs(nums[mini])){
                    mini = i;
                }
            }
            nums[mini] *= -1;
        }
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        return sum;
    }
};