class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int>temp = nums1;
        nums1.clear();
        for (int i = 0; i < m; i++)
        {
            nums1.push_back(temp[i]);
        }
        for (int j = 0; j < n; j++)
        {
            nums1.push_back(nums2[j]);

        }
        sort(nums1.begin(), nums1.end());
     
    }
};