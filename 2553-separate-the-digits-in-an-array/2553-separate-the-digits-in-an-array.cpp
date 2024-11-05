class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>arr;
        int rev = 0;
        int  c= 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]/10 == 0){
                arr.push_back(nums[i]);
            }
            else{
                while(nums[i]>0){
                    rev = rev * 10 + nums[i]%10;
                    nums[i] = nums[i]/10;
                    c++;
                }
                while(c!=0){
                arr.push_back(rev%10);
                rev = rev/10;
                c--;
                }
                
            }
        }
        return arr;
    }
};