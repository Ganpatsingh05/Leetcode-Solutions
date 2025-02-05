class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0){
            return -1;
        }
        int mid;
        int st = 0;
        int end = n-1;

        while(st <= end){
            mid = st+(end-st)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(target < nums[mid]){
                end = mid-1;
            }
            else if(nums[mid] < target){
                st = mid+1;
            }

        }
        return -1;
    }
};