class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int lastPointer = nums.size()-1;
        int firstPointer = 0;
        while(firstPointer <= lastPointer){
            if(nums[firstPointer] == val){
                int temp = nums[firstPointer];
                nums[firstPointer]=nums[lastPointer];
                nums[lastPointer] = temp;
                lastPointer--;
            }else{
            firstPointer++;

            }

        }
        return firstPointer;
    }
};