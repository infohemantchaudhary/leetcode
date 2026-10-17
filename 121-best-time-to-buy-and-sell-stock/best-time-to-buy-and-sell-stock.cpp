class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int minimum = prices[0];
     int dif = 0;
     for(int i = 0; i < prices.size(); i++){
        dif = max(dif , prices[i] - minimum);
        minimum = min(minimum , prices[i]);
     }  
     return dif;  
        
    }
};