class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;
        int cons=0;
        int ncount;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cons++;
            }
            else{
                ncount = max(ncount,cons);
                cons = 0;
            }
        }
        return max(ncount,cons);
    }
};