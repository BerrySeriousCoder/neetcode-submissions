class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int numsSize = nums.size();
        vector<int> ans;
        for(int i = 0 ; i < 2*numsSize;i++){
            ans.push_back(nums[i%numsSize]);
        }
        return ans;
    }
};