class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int gold = 0;
        int silver = 0;
        int bronze = 0;
        vector<string> ans;
        vector<int> og = score;
         sort(score.begin(),score.end(),greater<int>());
        for(int i = 0; i < score.size(); i++){
            gold = max(gold,score[i]);
        }
        for(int i = 0; i < score.size(); i++){
            if(score[i] < gold){
                silver = max(silver,score[i]);
            }
        }
    
        for(int i = 0; i < score.size(); i++){
            if(score[i] < silver){
                bronze = max(bronze,score[i]);
            }
        }
          
           for(int i = 0 ; i < og.size(); i++){
                if(og[i] == gold){
                    ans.push_back("Gold Medal");
                }
                else if(og[i] == silver){
                     ans.push_back("Silver Medal");
                }
                 else if(og[i] == bronze){
                     ans.push_back("Bronze Medal");
                }
                else{
                    for(int j = 0; j < score.size(); j++){
                        if(og[i] == score[j]){
                            ans.push_back(to_string(j + 1));
                            break;
                        }
                    }
                }
           }
            
            return ans;
           }    

};