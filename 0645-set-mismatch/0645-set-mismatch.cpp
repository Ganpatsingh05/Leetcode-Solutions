class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>arr;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int j=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                arr.push_back(nums[i]);
                nums[i]=100000000;
            }
            
        }
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            if(j==nums[i]){
                j++;
            }
            else{
                arr.push_back(j);
                break;
            }
        }
        return arr;
    }
};