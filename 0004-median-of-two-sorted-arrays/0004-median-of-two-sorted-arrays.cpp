class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() + nums2.size();
        vector<int>arr;
        for(int i=0;i<nums1.size();i++){
            arr.push_back(nums1[i]);
        }
        for(int j =0;j<nums2.size();j++){
            arr.push_back(nums2[j]);
        }
        int mid = m/2;
        float res =0;
        sort(arr.begin(),arr.end());
        if(m%2==0){
            res = (float(arr[mid]+arr[mid-1])/2);
            }
        else{
            res = arr[mid];
        }
        return res;
    }
};