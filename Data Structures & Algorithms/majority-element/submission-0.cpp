class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int arrayLength = nums.size();
        int candidate = nums[0];
        int count = 1 ;
        for(int i = 1 ; i < arrayLength; i++){
                if(nums[i]==candidate){
                    count++;
                }else {
                    count--;
                    if(count == 0 ){
                        candidate = nums[i];
                        count = 1;
                    }
                }
        }

        return candidate;
    }
};