class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n = nums.size();
    int min;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i;j<=n-1;j++){
            if(nums[j]<nums[min]){
                int temp = nums[j];
                nums[j] = nums[min];
                nums[min] = temp;
            }
        }
    }
    
    }
};