class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
       
        int i = 0, j = 0;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                arr.push_back(nums1[i]);
            
            i++;
            j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            } 
            else{
                j++;
            }
        }

        sort(arr.begin(), arr.end());

        auto last = unique(arr.begin(), arr.end());
        arr.erase(last, arr.end());

        return arr;
    }
};