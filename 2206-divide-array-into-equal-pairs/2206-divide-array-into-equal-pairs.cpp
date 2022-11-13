class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n =nums.size()/2;
            int a[501]={0};
        for(auto x:nums)
                a[x]++;
           int count=0;
         for(int i=0;i<501;i++)
         {
                 count+=(a[i]/2);
         }
        if(count==n)
                return true;
        return false;
    }
};