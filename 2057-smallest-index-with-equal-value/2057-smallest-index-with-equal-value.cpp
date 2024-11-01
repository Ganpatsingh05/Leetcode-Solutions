class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int sum = 0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            sum = i%10;
            if(sum==nums[i]){
                v.push_back(i);
                sort(v.begin(),v.end());
                return v[0];
            }
        }
        
        return -1;
    }
};