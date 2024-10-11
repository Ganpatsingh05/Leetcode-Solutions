class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;//nums.size();
        int i=0;//i<nums.size();i++){
            for(int j =i+1;j<nums.size();j++){
                if(nums[i]!=nums[j]){
                    i++;
                    nums[i] = nums[j];
                    count++;

                }
            
        }

        return (count);
    }
};