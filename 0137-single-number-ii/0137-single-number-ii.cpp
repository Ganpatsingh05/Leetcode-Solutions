class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int count;
        for(int i=0;i<n; i++) {
             count = 0;
            for(int j=0;j<n;j++) {
                if(nums[i] ==nums[j]) {
                    count++;
                }
            }
            if(count==1) {
                return nums[i];
            }
        }
        return -1;
    }
};