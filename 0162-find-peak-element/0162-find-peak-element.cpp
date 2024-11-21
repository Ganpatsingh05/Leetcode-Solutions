class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        auto n = max_element(nums.begin(),nums.end());
        int i=1;
        int j=0;
        while(*n!=nums[j]){
            j++;
        } 
        return j;
    }
};