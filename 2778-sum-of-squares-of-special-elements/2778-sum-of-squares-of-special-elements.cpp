class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum =0;
        int n = nums.size();
        for(int i=1;i<n+1;i++){
            if(n % i == 0){
                sum = sum + nums[i-1]*nums[i-1];
            }
        }
        return sum;
    }
};