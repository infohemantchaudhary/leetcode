class Solution {
public:
    double average(vector<int>& salary) {
        vector<int> ans;
        double sum = 0;
        sort(salary.begin() , salary.end());
        for(int i = 1 ; i < salary.size() - 1; i++){
            ans.push_back(salary[i]);
        }
        for(int i = 0;i < ans.size(); i++){
            sum += ans[i];
        }
        return sum / ans.size();
    }
};