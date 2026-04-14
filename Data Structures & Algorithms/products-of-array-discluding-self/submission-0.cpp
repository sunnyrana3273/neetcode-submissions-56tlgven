class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;

        for (int i = 0; i < nums.size(); i++){
            int skip = i;
            int prod = 1;
            for (int k = 0; k < nums.size(); k++){
                if (k != skip){
                    prod *= nums[k];
                }
            }
            res.push_back(prod);

        }

        return res;
    }
};
