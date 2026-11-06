class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd;
        vector<int> even;
        vector<int> ans;
        for(int i = 0;i < n ; i += 2 ){
            even.push_back(nums[i]);
        }
        for(int i = 1;i < n ; i += 2 ){
            odd.push_back(nums[i]);
        }
        sort(odd.begin(),odd.end() , greater<int>());
        sort(even.begin(),even.end());
         for(int i = 0; i < even.size(); i++){
            ans.push_back(even[i]);
            if(i < odd.size()){
                ans.push_back(odd[i]);
            }
        }

        return ans;
    }
};