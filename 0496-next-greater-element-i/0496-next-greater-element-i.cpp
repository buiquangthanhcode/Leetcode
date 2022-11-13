class Solution {
public:
    int findGreater(vector<int>vt,int value)
    {
           int i=0;
          for(i=0;i<vt.size();i++)
          {
               if(vt[i]==value)
                       break;
          }
            
          for(int k=i;k<vt.size();k++)
          
          {     if(vt[k]>value)
                          return vt[k];
          }
          return -1;   
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
        vector<int>vt; 
        for(int i=0;i<nums1.size();i++)
        {
                vt.push_back(findGreater(nums2,nums1[i]));
        }
            return vt; 
    }
};