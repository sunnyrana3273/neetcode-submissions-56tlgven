class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;

        for (int i = 0; i < nums.size(); i++){
            int currI = nums[i];
            for (int j = i + 1; j < nums.size(); j++){
                int currJ = nums[j];
                for (int k = i + 2; k < nums.size(); k++){
                    int currK = nums[k];
                    if (i == j || i == k || j == k){
                        continue;
                    }
                    if (currI + currJ + currK == 0){
                        vector<int> temp;
                        temp.push_back(currI);
                        temp.push_back(currJ);
                        temp.push_back(currK);
                        sort(temp.begin(), temp.end());
                        res.insert(temp);
                    }
                }
            }
    }

    vector<vector<int>> vectorRes(res.begin(), res.end());
    return vectorRes;
    }
};
