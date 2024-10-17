class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] ){
                    return true;}
                i++;
            }
        return false;
    }
};