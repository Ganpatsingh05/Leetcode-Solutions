class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums.size()==1){
                if(target>nums[i]){
                    return 1;
                }
                else{
                    return 0;
                }
            }
        }

        for(int j=0;j<nums.size();j++){
            if(nums[j]<target && nums[j+1]>target){
                return j+1;
            }
            else if(target > nums[nums.size()-1]){
                    return nums.size();
            }
        }



        return {};
    }
};