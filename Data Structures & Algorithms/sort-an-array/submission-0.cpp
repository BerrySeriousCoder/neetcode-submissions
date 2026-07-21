class Solution {

    vector<int> sort(vector<int>nums,int left , int right){
        if(left==right){
            return {nums[left]};
        }

        int mid = (left+right)/2;

        vector<int>arr1 = sort(nums, left ,  mid);
        vector<int>arr2 = sort(nums, mid+1,right);

        

        vector<int> ans;
        int i = 0 ;
        int j = 0 ;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]<arr2[j]){
                ans.push_back(arr1[i]);
                i++;
            }else{
                ans.push_back(arr2[j]);
                j++;
            }
        }

        while(i<arr1.size()){
              ans.push_back(arr1[i]);
                i++;
        }


        while(j<arr2.size()){
              ans.push_back(arr2[j]);
                j++;
        }

        
        return ans;

    }
public:
    vector<int> sortArray(vector<int>& nums) {
        
        int left = 0 ;
        int right = nums.size() -1;

        vector<int> ans = sort(nums,  left,  right);

        return ans;
    }
};