class Solution {
public:
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      if(nums1.size()==1&&nums2.size()==1&&nums1[0]==nums2[0])
            return nums1;
        int a[1001]={0};
        int b[1001]={0};
        vector<int>result;
        for(auto x:nums1)
            a[x]++;
        for(auto x:nums2)
            b[x]++;
        for(int i=0;i<1001;i++)
        {
            if(a[i]!=0&&b[i]!=0)
            {
                int n=min(a[i],b[i]);
                for(int j=0;j<n;j++)
                    result.push_back(i);
                
              
            }
        }
        
        
        return result;
    }
};