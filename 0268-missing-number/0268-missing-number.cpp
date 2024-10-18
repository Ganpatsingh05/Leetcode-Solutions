class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());                 //n=3
        int n = nums.size();

    int i=0;int j=0;
    while(i<=n ){
        if(n==i){
            return n;
        } 
        else if(i==nums[j] && j<n ){
            i++;
            j++;
        }
        
        else{
            return i;
        }
    }

        return {};
    }
};