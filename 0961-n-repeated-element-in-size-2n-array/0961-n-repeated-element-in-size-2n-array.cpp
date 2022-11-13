class Solution {
public:
    int repeatedNTimes(vector<int>& nums)
    {
        int n=nums.size()/2;
        map<int,int>m;
        for(auto x:nums)
        {
                m[x]++;
        }
        for(auto x:m )
        {
          if(x.second==n and m.size()==(n+1))
                  return x.first;
                  
        }
            return -1;    
    }
    
};